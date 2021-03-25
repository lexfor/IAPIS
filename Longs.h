//
// Created by tima on 5.03.21.
//

#ifndef LANG_LONGS_H
#define LANG_LONGS_H
#include <vector>


class Longs {
private:
    std::vector<int> Num;
    int toInt(std::vector<int>&)const;
public:
    Longs();
    explicit Longs(const int&);
    explicit Longs(const float&);
    explicit Longs(const std::vector<int>&);
    Longs(const Longs &);
    Longs operator+(const Longs&)const;
    Longs operator+(const int&)const;
    Longs operator+(const float&)const;
    Longs operator-(const Longs&)const;
    Longs operator-(const int&)const;
    Longs operator-(const float&)const;
    Longs& operator=(const Longs&);
    Longs& operator=(const int&);
    Longs& operator=(const float&);
    Longs operator*(const Longs&)const;
    Longs operator*(const int&)const;
    Longs operator*(const float&)const;
    Longs operator/(const Longs&)const;
    Longs operator/(const int&)const;
    Longs operator/(const float&)const;
    Longs& operator+=(const Longs&);
    Longs& operator+=(const int&);
    Longs& operator+=(const float&);
    Longs& operator-=(const Longs&);
    Longs& operator-=(const int&);
    Longs& operator-=(const float&);
    Longs& operator*=(const Longs&);
    Longs& operator*=(const int&);
    Longs& operator*=(const float&);
    Longs& operator/=(const Longs&);
    Longs& operator/=(const int&);
    Longs& operator/=(const float&);
    bool operator<(const Longs&)const;
    bool operator>(const Longs&)const;
    bool operator<=(const Longs&)const;
    bool operator>=(const Longs&)const;
    bool operator==(const Longs&)const;
    bool operator!=(const Longs&)const;
    bool operator<(const int&)const;
    bool operator>(const int&)const;
    bool operator<=(const int&)const;
    bool operator>=(const int&)const;
    bool operator==(const int&)const;
    bool operator!=(const int&)const;
    bool operator<(const float&)const;
    bool operator>(const float&)const;
    bool operator<=(const float&)const;
    bool operator>=(const float&)const;
    bool operator==(const float&)const;
    bool operator!=(const float&)const;
    friend int operator+(int&,const Longs&);
    friend int operator-(int&,const Longs&);
    friend int operator*(int&,const Longs&);
    friend int operator/(int&,const Longs&);
    friend bool operator<(int&,const Longs&);
    friend bool operator<=(int&,const Longs&);
    friend bool operator>=(int&,const Longs&);
    friend bool operator>(int&,const Longs&);
    friend bool operator==(int&,const Longs&);
    friend bool operator!=(int&,const Longs&);
    friend int operator+(float &,const Longs&);
    friend int operator-(float&,const Longs&);
    friend int operator*(float&,const Longs&);
    friend int operator/(float&,const Longs&);
    friend bool operator<(float&,const Longs&);
    friend bool operator<=(float&,const Longs&);
    friend bool operator>=(float&,const Longs&);
    friend bool operator>(float&,const Longs&);
    friend bool operator==(float&,const Longs&);
    friend bool operator!=(float&,const Longs&);
    int getNum()const;
};


#endif //LANG_LONGS_H
