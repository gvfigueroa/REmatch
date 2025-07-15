// Generated from REmatchParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link REmatchParser}.
 */
public interface REmatchParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link REmatchParser#root}.
	 * @param ctx the parse tree
	 */
	void enterRoot(REmatchParser.RootContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#root}.
	 * @param ctx the parse tree
	 */
	void exitRoot(REmatchParser.RootContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#alternation}.
	 * @param ctx the parse tree
	 */
	void enterAlternation(REmatchParser.AlternationContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#alternation}.
	 * @param ctx the parse tree
	 */
	void exitAlternation(REmatchParser.AlternationContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(REmatchParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(REmatchParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#element}.
	 * @param ctx the parse tree
	 */
	void enterElement(REmatchParser.ElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#element}.
	 * @param ctx the parse tree
	 */
	void exitElement(REmatchParser.ElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#group}.
	 * @param ctx the parse tree
	 */
	void enterGroup(REmatchParser.GroupContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#group}.
	 * @param ctx the parse tree
	 */
	void exitGroup(REmatchParser.GroupContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#parentheses}.
	 * @param ctx the parse tree
	 */
	void enterParentheses(REmatchParser.ParenthesesContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#parentheses}.
	 * @param ctx the parse tree
	 */
	void exitParentheses(REmatchParser.ParenthesesContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#assignation}.
	 * @param ctx the parse tree
	 */
	void enterAssignation(REmatchParser.AssignationContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#assignation}.
	 * @param ctx the parse tree
	 */
	void exitAssignation(REmatchParser.AssignationContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#leftAssignation}.
	 * @param ctx the parse tree
	 */
	void enterLeftAssignation(REmatchParser.LeftAssignationContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#leftAssignation}.
	 * @param ctx the parse tree
	 */
	void exitLeftAssignation(REmatchParser.LeftAssignationContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#rigthAssignation}.
	 * @param ctx the parse tree
	 */
	void enterRigthAssignation(REmatchParser.RigthAssignationContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#rigthAssignation}.
	 * @param ctx the parse tree
	 */
	void exitRigthAssignation(REmatchParser.RigthAssignationContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#varname}.
	 * @param ctx the parse tree
	 */
	void enterVarname(REmatchParser.VarnameContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#varname}.
	 * @param ctx the parse tree
	 */
	void exitVarname(REmatchParser.VarnameContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#atom}.
	 * @param ctx the parse tree
	 */
	void enterAtom(REmatchParser.AtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#atom}.
	 * @param ctx the parse tree
	 */
	void exitAtom(REmatchParser.AtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#characterClass}.
	 * @param ctx the parse tree
	 */
	void enterCharacterClass(REmatchParser.CharacterClassContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#characterClass}.
	 * @param ctx the parse tree
	 */
	void exitCharacterClass(REmatchParser.CharacterClassContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccAtom}.
	 * @param ctx the parse tree
	 */
	void enterCcAtom(REmatchParser.CcAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccAtom}.
	 * @param ctx the parse tree
	 */
	void exitCcAtom(REmatchParser.CcAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccRange}.
	 * @param ctx the parse tree
	 */
	void enterCcRange(REmatchParser.CcRangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccRange}.
	 * @param ctx the parse tree
	 */
	void exitCcRange(REmatchParser.CcRangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccSingle}.
	 * @param ctx the parse tree
	 */
	void enterCcSingle(REmatchParser.CcSingleContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccSingle}.
	 * @param ctx the parse tree
	 */
	void exitCcSingle(REmatchParser.CcSingleContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccLiteral}.
	 * @param ctx the parse tree
	 */
	void enterCcLiteral(REmatchParser.CcLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccLiteral}.
	 * @param ctx the parse tree
	 */
	void exitCcLiteral(REmatchParser.CcLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccEscapes}.
	 * @param ctx the parse tree
	 */
	void enterCcEscapes(REmatchParser.CcEscapesContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccEscapes}.
	 * @param ctx the parse tree
	 */
	void exitCcEscapes(REmatchParser.CcEscapesContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccOther}.
	 * @param ctx the parse tree
	 */
	void enterCcOther(REmatchParser.CcOtherContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccOther}.
	 * @param ctx the parse tree
	 */
	void exitCcOther(REmatchParser.CcOtherContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#ccSpecial}.
	 * @param ctx the parse tree
	 */
	void enterCcSpecial(REmatchParser.CcSpecialContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#ccSpecial}.
	 * @param ctx the parse tree
	 */
	void exitCcSpecial(REmatchParser.CcSpecialContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#singleSharedAtom}.
	 * @param ctx the parse tree
	 */
	void enterSingleSharedAtom(REmatchParser.SingleSharedAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#singleSharedAtom}.
	 * @param ctx the parse tree
	 */
	void exitSingleSharedAtom(REmatchParser.SingleSharedAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#literal}.
	 * @param ctx the parse tree
	 */
	void enterLiteral(REmatchParser.LiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#literal}.
	 * @param ctx the parse tree
	 */
	void exitLiteral(REmatchParser.LiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#escapes}.
	 * @param ctx the parse tree
	 */
	void enterEscapes(REmatchParser.EscapesContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#escapes}.
	 * @param ctx the parse tree
	 */
	void exitEscapes(REmatchParser.EscapesContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#special}.
	 * @param ctx the parse tree
	 */
	void enterSpecial(REmatchParser.SpecialContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#special}.
	 * @param ctx the parse tree
	 */
	void exitSpecial(REmatchParser.SpecialContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#other}.
	 * @param ctx the parse tree
	 */
	void enterOther(REmatchParser.OtherContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#other}.
	 * @param ctx the parse tree
	 */
	void exitOther(REmatchParser.OtherContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#sharedAtom}.
	 * @param ctx the parse tree
	 */
	void enterSharedAtom(REmatchParser.SharedAtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#sharedAtom}.
	 * @param ctx the parse tree
	 */
	void exitSharedAtom(REmatchParser.SharedAtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#quantifier}.
	 * @param ctx the parse tree
	 */
	void enterQuantifier(REmatchParser.QuantifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#quantifier}.
	 * @param ctx the parse tree
	 */
	void exitQuantifier(REmatchParser.QuantifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#quantity}.
	 * @param ctx the parse tree
	 */
	void enterQuantity(REmatchParser.QuantityContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#quantity}.
	 * @param ctx the parse tree
	 */
	void exitQuantity(REmatchParser.QuantityContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#quantExact}.
	 * @param ctx the parse tree
	 */
	void enterQuantExact(REmatchParser.QuantExactContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#quantExact}.
	 * @param ctx the parse tree
	 */
	void exitQuantExact(REmatchParser.QuantExactContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#quantRange}.
	 * @param ctx the parse tree
	 */
	void enterQuantRange(REmatchParser.QuantRangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#quantRange}.
	 * @param ctx the parse tree
	 */
	void exitQuantRange(REmatchParser.QuantRangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#quantMin}.
	 * @param ctx the parse tree
	 */
	void enterQuantMin(REmatchParser.QuantMinContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#quantMin}.
	 * @param ctx the parse tree
	 */
	void exitQuantMin(REmatchParser.QuantMinContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#quantMax}.
	 * @param ctx the parse tree
	 */
	void enterQuantMax(REmatchParser.QuantMaxContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#quantMax}.
	 * @param ctx the parse tree
	 */
	void exitQuantMax(REmatchParser.QuantMaxContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#number}.
	 * @param ctx the parse tree
	 */
	void enterNumber(REmatchParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#number}.
	 * @param ctx the parse tree
	 */
	void exitNumber(REmatchParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#anchor}.
	 * @param ctx the parse tree
	 */
	void enterAnchor(REmatchParser.AnchorContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#anchor}.
	 * @param ctx the parse tree
	 */
	void exitAnchor(REmatchParser.AnchorContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#anchorStart}.
	 * @param ctx the parse tree
	 */
	void enterAnchorStart(REmatchParser.AnchorStartContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#anchorStart}.
	 * @param ctx the parse tree
	 */
	void exitAnchorStart(REmatchParser.AnchorStartContext ctx);
	/**
	 * Enter a parse tree produced by {@link REmatchParser#anchorEnd}.
	 * @param ctx the parse tree
	 */
	void enterAnchorEnd(REmatchParser.AnchorEndContext ctx);
	/**
	 * Exit a parse tree produced by {@link REmatchParser#anchorEnd}.
	 * @param ctx the parse tree
	 */
	void exitAnchorEnd(REmatchParser.AnchorEndContext ctx);
}