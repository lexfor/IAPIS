// Generated from /home/tima/lang/HelloParser.g4 by ANTLR 4.9.1
/*Author : Tsimofei Kinevich, group : 821703*/
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link HelloParser}.
 */
public interface HelloParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link HelloParser#main}.
	 * @param ctx the parse tree
	 */
	void enterMain(HelloParser.MainContext ctx);
	/**
	 * Exit a parse tree produced by {@link HelloParser#main}.
	 * @param ctx the parse tree
	 */
	void exitMain(HelloParser.MainContext ctx);
	/**
	 * Enter a parse tree produced by {@link HelloParser#summ}.
	 * @param ctx the parse tree
	 */
	void enterSumm(HelloParser.SummContext ctx);
	/**
	 * Exit a parse tree produced by {@link HelloParser#summ}.
	 * @param ctx the parse tree
	 */
	void exitSumm(HelloParser.SummContext ctx);
}