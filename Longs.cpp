//
// Created by tima on 5.03.21.
//

#include "Longs.h"

#include <utility>
#include <cmath>

Longs::Longs() {
    if(Num.empty()){

    }else{
        Num.clear();
    }

}

Longs::Longs(const std::vector<int>& num) {
    Num = num;
}

Longs Longs::operator+(const Longs & Sec) const {
    Longs Rez;
    std::vector<int> RezNum;
    int rez;
    bool ten = false;
    auto i = Num.rbegin();
    auto j = Sec.Num.rbegin();
    while(i != Num.rend() && j !=Sec.Num.rend()){
        if(i == Num.rend() || j == Sec.Num.rend()){
            if(i == Num.rend()){
                rez = *j;
                j++;
            }
            else{
                rez = *i;
                i++;
            }
        }
        else{
            rez = *i + *j;
            if(ten){
                rez++;
            }
            if(rez > 9){
                rez -= 10;
                ten = true;
            }
            i++;
            j++;
        }
        RezNum.push_back(rez);
    }
    return Longs(RezNum);
}

Longs Longs::operator-(const Longs & Sec) const {
    Longs Rez;
    std::vector<int> RezNum;
    int rez;
    bool ten = false;
    if(Num > Sec.Num){
        auto i = Num.rbegin();
        auto j = Sec.Num.rbegin();
        while(i != Num.rend() && j !=Sec.Num.rend()){
            if(i == Num.rend() || j == Sec.Num.rend()){
                if(i == Num.rend()){
                    rez = -*j;
                    j++;
                }
                else{
                    rez = *i;
                    if(ten){
                        rez--;
                    }
                    if(rez < 0){
                        rez += 10;
                        ten = true;
                    }
                    i++;
                }
            }
            else{
                rez = *i - *j;
                if(ten){
                    rez--;
                }
                if(rez < 0){
                    rez += 10;
                    ten = true;
                }
                i++;
                j++;
            }
            RezNum.push_back(rez);
        }
    }else{
        auto i = Sec.Num.rbegin();
        auto j = Num.rbegin();
        while(i != Sec.Num.rend() && j !=Num.rend()){
            if(i == Sec.Num.rend() || j == Num.rend()){
                if(i == Sec.Num.rend()){
                    rez = -*j;
                }
                else{
                    rez = *i;
                    if(ten){
                        rez--;
                    }
                    if(rez < 0){
                        rez += 10;
                        ten = true;
                    }
                    i++;
                }
            }
            else{
                rez = *i - *j;
                if(ten){
                    rez--;
                }
                if(rez < 0){
                    rez += 10;
                    ten = true;
                }
                i++;
                j++;
            }
            RezNum.push_back(rez);
        }
        RezNum[0] *= -1;
    }
    return Longs(RezNum);
}

Longs::Longs(const int& rez) {
    std::vector<int> temp;
    int tempInt = rez;
    while(true){
        if(tempInt <= 0){
            break;
        }
        temp.emplace_back(tempInt % 10);
        tempInt /= 10;
    }
    Num.clear();
    for(auto i = temp.rbegin(); i != temp.rend();i++){
        Num.emplace_back(*i);
    }
}

Longs Longs::operator+(const int& temp) const {
    Longs Temp(temp);
    return *this + Temp;
}

Longs Longs::operator-(const int& temp) const {
    Longs Temp(temp);
    return *this - Temp;
}

Longs::Longs(const Longs & temp) {
    Num = temp.Num;
}

Longs& Longs::operator=(const Longs& temp) {
    Num = temp.Num;
}

Longs Longs::operator*(const int & temp) const {
    Longs Temp(temp);
    return *this * Temp;
}

Longs Longs::operator*(const Longs & temp)const {
    int add, addedlevel = 0;
    std::vector<int> rez;
    rez.resize(Num.size() + temp.Num.size(),0);
    add = 0;
    for(auto i = temp.Num.rbegin(); i != temp.Num.rend(); i++){
        int level = 0;
        for(auto j = Num.rbegin(); j != Num.rend(); j++){
            rez[level + addedlevel] += ((*i * *j) % 10);
            rez[level + addedlevel] += add;
            add = ((*i * *j) / 10);
            if(rez[level + addedlevel] > 9){
                 rez[level + addedlevel] -= 10;
                 add++;
            }
            level++;
        }
        addedlevel++;
    }
    for(auto i = rez.size() - 1; i >= 0; i--){
        if(rez[i] == 0){
            rez.erase(rez.begin() + i);
        }
    }
    Longs result;
    for(auto i = rez.rbegin(); i != rez.rend();i++){
        result.Num.emplace_back(*i);
    }
    return result;
}

Longs Longs::operator/(const int & temp)const {
    std::vector<int> rez, Nums;
    int tempNum = 0;
    bool isdop = false;
    for(auto i : Num){
        if(isdop){
            Nums.push_back(i);
            tempNum = toInt(Nums);
            if (tempNum < temp) {
                rez.push_back(0);
                Nums.push_back(i);
                isdop = true;
            }else{
                rez.push_back(tempNum / temp);
                if(tempNum % temp != 0){
                    Nums.clear();
                    Nums.push_back(tempNum % temp);
                }else{
                    isdop = false;
                }
            }
        }else {
            if (i < temp) {
                rez.push_back(0);
                Nums.push_back(i);
                isdop = true;
            }else{
                rez.push_back(i / temp);
                if(i % temp != 0){
                    Nums.clear();
                    Nums.push_back(i % temp);
                    isdop = true;
                }
            }
        }
    }
    return Longs(rez);
}

Longs Longs::operator/(const Longs &temp) const {
    return *this / temp.getNum();
}

int Longs::toInt(std::vector<int>& vec) const{
    int level = 0,rez = 0;
    for(auto i = vec.rbegin(); i != vec.rend();i++){
        rez += *i * pow(10,level);
        level++;
    }
    return rez;
}

int Longs::getNum() const {
    return toInt(const_cast<std::vector<int> &>(Num));
}

bool Longs::operator<(const Longs & temp) const {
    if(Num.size() < temp.Num.size()){
        return true;
    }else if(Num.size() > temp.Num.size()){
        return false;
    }
    for(int i = 0,j = 0;i < Num.size() && j < temp.Num.size(); i++,j++){
        if(Num[i] < temp.Num[j]){
            return true;
        }else if(Num[i] > temp.Num[j]){
            return false;
        }else if(Num[i] == temp.Num[j]){
            continue;
        }
    }
    return false;
}

bool Longs::operator>(const Longs & temp) const {
    if(Num.size() > temp.Num.size()){
        return true;
    }else if(Num.size() < temp.Num.size()){
        return false;
    }
    for(int i = 0,j = 0;i < Num.size() && j < temp.Num.size(); i++,j++){
        if(Num[i] > temp.Num[j]){
            return true;
        }else if(Num[i] < temp.Num[j]){
            return false;
        }else if(Num[i] == temp.Num[j]){
            continue;
        }
    }
    return false;
}

bool Longs::operator<=(const Longs & temp) const {
    if(Num.size() < temp.Num.size()){
        return true;
    }else if(Num.size() > temp.Num.size()){
        return false;
    }
    for(int i = 0,j = 0;i < Num.size() && j < temp.Num.size(); i++,j++){
        if(Num[i] < temp.Num[j]){
            return true;
        }else if(Num[i] > temp.Num[j]){
            return false;
        }else if(Num[i] == temp.Num[j]){
            continue;
        }
    }
    return true;
}

bool Longs::operator>=(const Longs & temp) const {
    if(Num.size() > temp.Num.size()){
        return true;
    }else if(Num.size() < temp.Num.size()){
        return false;
    }
    for(int i = 0,j = 0;i < Num.size() && j < temp.Num.size(); i++,j++){
        if(Num[i] > temp.Num[j]){
            return true;
        }else if(Num[i] < temp.Num[j]){
            return false;
        }else if(Num[i] == temp.Num[j]){
            continue;
        }
    }
    return true;
}

bool Longs::operator==(const Longs & temp) const {
    if(Num.size() != temp.Num.size()){
        return false;
    }
    for(int i = 0,j = 0;i < Num.size() && j < temp.Num.size(); i++,j++){
        if(Num[i] < temp.Num[j]){
            return false;
        }else if(Num[i] > temp.Num[j]){
            return false;
        }else if(Num[i] == temp.Num[j]){
            continue;
        }
    }
    return true;
}

bool Longs::operator!=(const Longs & temp) const {
    if(Num.size() != temp.Num.size()){
        return true;
    }
    for(int i = 0,j = 0;i < Num.size() && j < temp.Num.size(); i++,j++){
        if(Num[i] < temp.Num[j]){
            return true;
        }else if(Num[i] > temp.Num[j]){
            return true;
        }else if(Num[i] == temp.Num[j]){
            continue;
        }
    }
    return false;
}

bool Longs::operator<(const int & temp) const {
    return getNum() < temp;
}

bool Longs::operator>(const int & temp) const {
    return getNum() > temp;
}

bool Longs::operator<=(const int & temp) const {
    return getNum() <= temp;
}

bool Longs::operator>=(const int & temp) const {
    return getNum() >= temp;
}

bool Longs::operator==(const int & temp) const {
    return getNum() == temp;
}

bool Longs::operator!=(const int & temp) const {
    return getNum() != temp;
}

Longs& Longs::operator+=(const Longs & temp)  {
    Longs rez = *this + temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator+=(const int &temp)  {
    Longs rez = *this + temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator-=(const Longs &temp)  {
    Longs rez = *this - temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator-=(const int &temp)  {
    Longs rez = *this - temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator*=(const Longs &temp) {
    Longs rez = *this * temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator*=(const int &temp)  {
    Longs rez = *this * temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator/=(const Longs &temp) {
    Longs rez = *this / temp;
    Num = rez.Num;
    return *this;
}

Longs& Longs::operator/=(const int &temp) {
    Longs rez = *this / temp;
    Num = rez.Num;
    return *this;
}
int operator+(int& temp1,const Longs& temp2){
    return temp1 + temp2.getNum();
}
int operator-(int& temp1,const Longs& temp2){
    return temp1 - temp2.getNum();
}
int operator*(int& temp1,const Longs& temp2){
    return temp1 * temp2.getNum();
}
int operator/(int& temp1,const Longs& temp2){
    return temp1 / temp2.getNum();
}
bool operator<(int& temp1,const Longs& temp2){
    return temp1 < temp2.getNum();
}
bool operator<=(int& temp1,const Longs& temp2){
    return temp1 <= temp2.getNum();
}
bool operator>(int& temp1,const Longs& temp2){
    return temp1 > temp2.getNum();
}
bool operator>=(int& temp1,const Longs& temp2){
    return temp1 >= temp2.getNum();
}
bool operator==(int& temp1,const Longs& temp2){
    return temp1 == temp2.getNum();
}
bool operator!=(int& temp1,const Longs& temp2){
    return temp1 != temp2.getNum();
}

Longs::Longs(const float &rez) {
    std::vector<int> temp;
    int tempInt = (int)rez;
    while(true){
        if(tempInt <= 0){
            break;
        }
        temp.emplace_back(tempInt % 10);
        tempInt /= 10;
    }
    Num.clear();
    for(auto i = temp.rbegin(); i != temp.rend();i++){
        Num.emplace_back(*i);
    }
}

Longs Longs::operator+(const float &temp) const {
    Longs Temp(temp);
    return *this + Temp;
}

Longs Longs::operator-(const float &temp) const {
    Longs Temp(temp);
    return *this - Temp;
}

Longs &Longs::operator=(const int &rez) {
    std::vector<int> temp;
    int tempInt = rez;
    while(true){
        if(tempInt <= 0){
            break;
        }
        temp.emplace_back(tempInt % 10);
        tempInt /= 10;
    }
    Num.clear();
    for(auto i = temp.rbegin(); i != temp.rend();i++){
        Num.emplace_back(*i);
    }
}

Longs &Longs::operator=(const float &rez) {
    std::vector<int> temp;
    int tempInt = (int)rez;
    while(true){
        if(tempInt <= 0){
            break;
        }
        temp.emplace_back(tempInt % 10);
        tempInt /= 10;
    }
    Num.clear();
    for(auto i = temp.rbegin(); i != temp.rend();i++){
        Num.emplace_back(*i);
    }
}

Longs Longs::operator*(const float &temp) const {
    Longs Temp(temp);
    return *this * Temp;
}

Longs Longs::operator/(const float &temp) const {
    Longs Temp(temp);
    return *this / Temp;
}

Longs &Longs::operator+=(const float &temp) {
    Longs rez = *this + temp;
    Num = rez.Num;
    return *this;
}

Longs &Longs::operator-=(const float &temp) {
    Longs rez = *this - temp;
    Num = rez.Num;
    return *this;
}

Longs &Longs::operator*=(const float &temp) {
    Longs rez = *this * temp;
    Num = rez.Num;
    return *this;
}

Longs &Longs::operator/=(const float &temp) {
    Longs rez = *this / temp;
    Num = rez.Num;
    return *this;
}

bool Longs::operator<(const float &temp) const {
    return getNum() < (int)temp;
}

bool Longs::operator>(const float &temp) const {
    return getNum() > (int)temp;
}

bool Longs::operator<=(const float &temp) const {
    return getNum() <= (int)temp;
}

bool Longs::operator>=(const float &temp) const {
    return getNum() >= (int)temp;
}

bool Longs::operator==(const float &temp) const {
    return getNum() == (int)temp;
}

bool Longs::operator!=(const float &temp) const {
    return getNum() != (int)temp;
}
int operator+(float & temp1,const Longs& temp2){
    return (int)temp1 + temp2.getNum();
}
int operator-(float& temp1,const Longs& temp2){
    return (int)temp1 - temp2.getNum();
}
int operator*(float& temp1,const Longs& temp2){
    return (int)temp1 * temp2.getNum();
}
int operator/(float& temp1,const Longs& temp2){
    return (int)temp1 / temp2.getNum();
}
bool operator<(float& temp1,const Longs& temp2){
    return (int)temp1 < temp2.getNum();
}
bool operator<=(float& temp1,const Longs& temp2){
    return (int)temp1 <= temp2.getNum();
}
bool operator>(float& temp1,const Longs& temp2){
    return (int)temp1 > temp2.getNum();
}
bool operator>=(float& temp1,const Longs& temp2){
    return (int)temp1 >= temp2.getNum();
}
bool operator==(float& temp1,const Longs& temp2){
    return (int)temp1 == temp2.getNum();
}
bool operator!=(float& temp1,const Longs& temp2){
    return (int)temp1 != temp2.getNum();
}