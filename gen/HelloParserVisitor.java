// Generated from /home/tima/lang/HelloParser.g4 by ANTLR 4.9.1
/*Author : Tsimofei Kinevich, group : 821703*/
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link HelloParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface HelloParserVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link HelloParser#main}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMain(HelloParser.MainContext ctx);
	/**
	 * Visit a parse tree produced by {@link HelloParser#summ}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSumm(HelloParser.SummContext ctx);
}