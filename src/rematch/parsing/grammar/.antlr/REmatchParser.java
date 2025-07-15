// Generated from /home/verena/projects/ipre/REmatch/src/rematch/parsing/grammar/REmatchParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class REmatchParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		DECIMAL_DIGIT=1, NOT_DECIMAL_DIGIT=2, WHITESPACE=3, NOT_WHITESPACE=4, 
		ALPHANUMERIC=5, NOT_ALPHANUMERIC=6, TAB=7, CARRIAGE_RETURN=8, NEWLINE=9, 
		VERTICAL_WHITESPACE=10, FORM_FEED=11, PIPE=12, EXCLAMAITON=13, L_CURLY=14, 
		R_CURLY=15, L_PAR=16, R_PAR=17, COMMA=18, QUESTION=19, PLUS=20, STAR=21, 
		HAT=22, HYPHEN=23, L_BRACK=24, R_BRACK=25, BACKSLASH=26, ALPHA=27, DIGIT=28, 
		DOT=29, DOLLAR=30, UNRECOGNIZED=31;
	public static final int
		RULE_root = 0, RULE_alternation = 1, RULE_expr = 2, RULE_element = 3, 
		RULE_group = 4, RULE_parentheses = 5, RULE_assignation = 6, RULE_leftAssignation = 7, 
		RULE_rightAssignation = 8, RULE_varname = 9, RULE_atom = 10, RULE_characterClass = 11, 
		RULE_ccAtom = 12, RULE_ccRange = 13, RULE_ccSingle = 14, RULE_ccLiteral = 15, 
		RULE_ccEscapes = 16, RULE_ccOther = 17, RULE_ccSpecial = 18, RULE_singleSharedAtom = 19, 
		RULE_literal = 20, RULE_escapes = 21, RULE_special = 22, RULE_other = 23, 
		RULE_sharedAtom = 24, RULE_quantifier = 25, RULE_quantity = 26, RULE_quantExact = 27, 
		RULE_quantRange = 28, RULE_quantMin = 29, RULE_quantMax = 30, RULE_number = 31, 
		RULE_anchor = 32, RULE_anchorStart = 33, RULE_anchorEnd = 34;
	private static String[] makeRuleNames() {
		return new String[] {
			"root", "alternation", "expr", "element", "group", "parentheses", "assignation", 
			"leftAssignation", "rightAssignation", "varname", "atom", "characterClass", 
			"ccAtom", "ccRange", "ccSingle", "ccLiteral", "ccEscapes", "ccOther", 
			"ccSpecial", "singleSharedAtom", "literal", "escapes", "special", "other", 
			"sharedAtom", "quantifier", "quantity", "quantExact", "quantRange", "quantMin", 
			"quantMax", "number", "anchor", "anchorStart", "anchorEnd"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'\\d'", "'\\D'", "'\\s'", "'\\S'", "'\\w'", "'\\W'", "'\\t'", 
			"'\\r'", "'\\n'", "'\\v'", "'\\f'", "'|'", "'!'", "'{'", "'}'", "'('", 
			"')'", "','", "'?'", "'+'", "'*'", "'^'", "'-'", "'['", "']'", "'\\'", 
			null, null, "'.'", "'$'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "DECIMAL_DIGIT", "NOT_DECIMAL_DIGIT", "WHITESPACE", "NOT_WHITESPACE", 
			"ALPHANUMERIC", "NOT_ALPHANUMERIC", "TAB", "CARRIAGE_RETURN", "NEWLINE", 
			"VERTICAL_WHITESPACE", "FORM_FEED", "PIPE", "EXCLAMAITON", "L_CURLY", 
			"R_CURLY", "L_PAR", "R_PAR", "COMMA", "QUESTION", "PLUS", "STAR", "HAT", 
			"HYPHEN", "L_BRACK", "R_BRACK", "BACKSLASH", "ALPHA", "DIGIT", "DOT", 
			"DOLLAR", "UNRECOGNIZED"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "REmatchParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public REmatchParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RootContext extends ParserRuleContext {
		public AlternationContext alternation() {
			return getRuleContext(AlternationContext.class,0);
		}
		public TerminalNode EOF() { return getToken(REmatchParser.EOF, 0); }
		public RootContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_root; }
	}

	public final RootContext root() throws RecognitionException {
		RootContext _localctx = new RootContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_root);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			alternation();
			setState(71);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AlternationContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> PIPE() { return getTokens(REmatchParser.PIPE); }
		public TerminalNode PIPE(int i) {
			return getToken(REmatchParser.PIPE, i);
		}
		public AlternationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alternation; }
	}

	public final AlternationContext alternation() throws RecognitionException {
		AlternationContext _localctx = new AlternationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_alternation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			expr();
			setState(78);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==PIPE) {
				{
				{
				setState(74);
				match(PIPE);
				setState(75);
				expr();
				}
				}
				setState(80);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public List<ElementContext> element() {
			return getRuleContexts(ElementContext.class);
		}
		public ElementContext element(int i) {
			return getRuleContext(ElementContext.class,i);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_expr);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(82); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(81);
					element();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(84); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElementContext extends ParserRuleContext {
		public GroupContext group() {
			return getRuleContext(GroupContext.class,0);
		}
		public QuantifierContext quantifier() {
			return getRuleContext(QuantifierContext.class,0);
		}
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_element);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(86);
			group();
			setState(88);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 3686400L) != 0)) {
				{
				setState(87);
				quantifier();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GroupContext extends ParserRuleContext {
		public ParenthesesContext parentheses() {
			return getRuleContext(ParenthesesContext.class,0);
		}
		public AssignationContext assignation() {
			return getRuleContext(AssignationContext.class,0);
		}
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public GroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_group; }
	}

	public final GroupContext group() throws RecognitionException {
		GroupContext _localctx = new GroupContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_group);
		try {
			setState(93);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(90);
				parentheses();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(91);
				assignation();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(92);
				atom();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParenthesesContext extends ParserRuleContext {
		public TerminalNode L_PAR() { return getToken(REmatchParser.L_PAR, 0); }
		public AlternationContext alternation() {
			return getRuleContext(AlternationContext.class,0);
		}
		public TerminalNode R_PAR() { return getToken(REmatchParser.R_PAR, 0); }
		public ParenthesesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parentheses; }
	}

	public final ParenthesesContext parentheses() throws RecognitionException {
		ParenthesesContext _localctx = new ParenthesesContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_parentheses);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(95);
			match(L_PAR);
			setState(96);
			alternation();
			setState(97);
			match(R_PAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignationContext extends ParserRuleContext {
		public TerminalNode EXCLAMAITON() { return getToken(REmatchParser.EXCLAMAITON, 0); }
		public VarnameContext varname() {
			return getRuleContext(VarnameContext.class,0);
		}
		public TerminalNode L_CURLY() { return getToken(REmatchParser.L_CURLY, 0); }
		public AlternationContext alternation() {
			return getRuleContext(AlternationContext.class,0);
		}
		public TerminalNode R_CURLY() { return getToken(REmatchParser.R_CURLY, 0); }
		public AssignationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignation; }
	}

	public final AssignationContext assignation() throws RecognitionException {
		AssignationContext _localctx = new AssignationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_assignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			match(EXCLAMAITON);
			setState(100);
			varname();
			setState(101);
			match(L_CURLY);
			setState(102);
			alternation();
			setState(103);
			match(R_CURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LeftAssignationContext extends ParserRuleContext {
		public List<TerminalNode> EXCLAMAITON() { return getTokens(REmatchParser.EXCLAMAITON); }
		public TerminalNode EXCLAMAITON(int i) {
			return getToken(REmatchParser.EXCLAMAITON, i);
		}
		public VarnameContext varname() {
			return getRuleContext(VarnameContext.class,0);
		}
		public TerminalNode L_CURLY() { return getToken(REmatchParser.L_CURLY, 0); }
		public LeftAssignationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_leftAssignation; }
	}

	public final LeftAssignationContext leftAssignation() throws RecognitionException {
		LeftAssignationContext _localctx = new LeftAssignationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_leftAssignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			match(EXCLAMAITON);
			setState(106);
			match(EXCLAMAITON);
			setState(107);
			varname();
			setState(108);
			match(L_CURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RightAssignationContext extends ParserRuleContext {
		public TerminalNode R_CURLY() { return getToken(REmatchParser.R_CURLY, 0); }
		public VarnameContext varname() {
			return getRuleContext(VarnameContext.class,0);
		}
		public List<TerminalNode> EXCLAMAITON() { return getTokens(REmatchParser.EXCLAMAITON); }
		public TerminalNode EXCLAMAITON(int i) {
			return getToken(REmatchParser.EXCLAMAITON, i);
		}
		public RightAssignationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rightAssignation; }
	}

	public final RightAssignationContext rightAssignation() throws RecognitionException {
		RightAssignationContext _localctx = new RightAssignationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_rightAssignation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			match(R_CURLY);
			setState(111);
			varname();
			setState(112);
			match(EXCLAMAITON);
			setState(113);
			match(EXCLAMAITON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VarnameContext extends ParserRuleContext {
		public List<TerminalNode> ALPHA() { return getTokens(REmatchParser.ALPHA); }
		public TerminalNode ALPHA(int i) {
			return getToken(REmatchParser.ALPHA, i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(REmatchParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(REmatchParser.DIGIT, i);
		}
		public VarnameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varname; }
	}

	public final VarnameContext varname() throws RecognitionException {
		VarnameContext _localctx = new VarnameContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_varname);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(ALPHA);
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ALPHA || _la==DIGIT) {
				{
				{
				setState(116);
				_la = _input.LA(1);
				if ( !(_la==ALPHA || _la==DIGIT) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AtomContext extends ParserRuleContext {
		public LeftAssignationContext leftAssignation() {
			return getRuleContext(LeftAssignationContext.class,0);
		}
		public RightAssignationContext rightAssignation() {
			return getRuleContext(RightAssignationContext.class,0);
		}
		public CharacterClassContext characterClass() {
			return getRuleContext(CharacterClassContext.class,0);
		}
		public SingleSharedAtomContext singleSharedAtom() {
			return getRuleContext(SingleSharedAtomContext.class,0);
		}
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public AnchorContext anchor() {
			return getRuleContext(AnchorContext.class,0);
		}
		public AtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atom; }
	}

	public final AtomContext atom() throws RecognitionException {
		AtomContext _localctx = new AtomContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_atom);
		try {
			setState(128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(122);
				leftAssignation();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(123);
				rightAssignation();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				characterClass();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(125);
				singleSharedAtom();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(126);
				literal();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(127);
				anchor();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharacterClassContext extends ParserRuleContext {
		public TerminalNode L_BRACK() { return getToken(REmatchParser.L_BRACK, 0); }
		public TerminalNode R_BRACK() { return getToken(REmatchParser.R_BRACK, 0); }
		public TerminalNode HAT() { return getToken(REmatchParser.HAT, 0); }
		public List<CcAtomContext> ccAtom() {
			return getRuleContexts(CcAtomContext.class);
		}
		public CcAtomContext ccAtom(int i) {
			return getRuleContext(CcAtomContext.class,i);
		}
		public CharacterClassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterClass; }
	}

	public final CharacterClassContext characterClass() throws RecognitionException {
		CharacterClassContext _localctx = new CharacterClassContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_characterClass);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(L_BRACK);
			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HAT) {
				{
				setState(131);
				match(HAT);
				}
			}

			setState(135); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(134);
				ccAtom();
				}
				}
				setState(137); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 4248829950L) != 0) );
			setState(139);
			match(R_BRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcAtomContext extends ParserRuleContext {
		public CcRangeContext ccRange() {
			return getRuleContext(CcRangeContext.class,0);
		}
		public SharedAtomContext sharedAtom() {
			return getRuleContext(SharedAtomContext.class,0);
		}
		public CcSingleContext ccSingle() {
			return getRuleContext(CcSingleContext.class,0);
		}
		public CcAtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccAtom; }
	}

	public final CcAtomContext ccAtom() throws RecognitionException {
		CcAtomContext _localctx = new CcAtomContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_ccAtom);
		try {
			setState(144);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(141);
				ccRange();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(142);
				sharedAtom();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(143);
				ccSingle();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcRangeContext extends ParserRuleContext {
		public List<CcLiteralContext> ccLiteral() {
			return getRuleContexts(CcLiteralContext.class);
		}
		public CcLiteralContext ccLiteral(int i) {
			return getRuleContext(CcLiteralContext.class,i);
		}
		public TerminalNode HYPHEN() { return getToken(REmatchParser.HYPHEN, 0); }
		public CcRangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccRange; }
	}

	public final CcRangeContext ccRange() throws RecognitionException {
		CcRangeContext _localctx = new CcRangeContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_ccRange);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			ccLiteral();
			setState(147);
			match(HYPHEN);
			setState(148);
			ccLiteral();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcSingleContext extends ParserRuleContext {
		public CcLiteralContext ccLiteral() {
			return getRuleContext(CcLiteralContext.class,0);
		}
		public CcSingleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccSingle; }
	}

	public final CcSingleContext ccSingle() throws RecognitionException {
		CcSingleContext _localctx = new CcSingleContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_ccSingle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			ccLiteral();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcLiteralContext extends ParserRuleContext {
		public CcEscapesContext ccEscapes() {
			return getRuleContext(CcEscapesContext.class,0);
		}
		public CcSpecialContext ccSpecial() {
			return getRuleContext(CcSpecialContext.class,0);
		}
		public CcOtherContext ccOther() {
			return getRuleContext(CcOtherContext.class,0);
		}
		public CcLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccLiteral; }
	}

	public final CcLiteralContext ccLiteral() throws RecognitionException {
		CcLiteralContext _localctx = new CcLiteralContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_ccLiteral);
		try {
			setState(155);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(152);
				ccEscapes();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(153);
				ccSpecial();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(154);
				ccOther();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcEscapesContext extends ParserRuleContext {
		public List<TerminalNode> BACKSLASH() { return getTokens(REmatchParser.BACKSLASH); }
		public TerminalNode BACKSLASH(int i) {
			return getToken(REmatchParser.BACKSLASH, i);
		}
		public TerminalNode HAT() { return getToken(REmatchParser.HAT, 0); }
		public TerminalNode HYPHEN() { return getToken(REmatchParser.HYPHEN, 0); }
		public TerminalNode R_BRACK() { return getToken(REmatchParser.R_BRACK, 0); }
		public CcEscapesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccEscapes; }
	}

	public final CcEscapesContext ccEscapes() throws RecognitionException {
		CcEscapesContext _localctx = new CcEscapesContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_ccEscapes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(BACKSLASH);
			setState(158);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 113246208L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcOtherContext extends ParserRuleContext {
		public TerminalNode HAT() { return getToken(REmatchParser.HAT, 0); }
		public TerminalNode HYPHEN() { return getToken(REmatchParser.HYPHEN, 0); }
		public TerminalNode R_BRACK() { return getToken(REmatchParser.R_BRACK, 0); }
		public TerminalNode BACKSLASH() { return getToken(REmatchParser.BACKSLASH, 0); }
		public CcOtherContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccOther; }
	}

	public final CcOtherContext ccOther() throws RecognitionException {
		CcOtherContext _localctx = new CcOtherContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_ccOther);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			_la = _input.LA(1);
			if ( _la <= 0 || ((((_la) & ~0x3f) == 0 && ((1L << _la) & 113246208L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CcSpecialContext extends ParserRuleContext {
		public TerminalNode TAB() { return getToken(REmatchParser.TAB, 0); }
		public TerminalNode CARRIAGE_RETURN() { return getToken(REmatchParser.CARRIAGE_RETURN, 0); }
		public TerminalNode NEWLINE() { return getToken(REmatchParser.NEWLINE, 0); }
		public TerminalNode VERTICAL_WHITESPACE() { return getToken(REmatchParser.VERTICAL_WHITESPACE, 0); }
		public TerminalNode FORM_FEED() { return getToken(REmatchParser.FORM_FEED, 0); }
		public CcSpecialContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ccSpecial; }
	}

	public final CcSpecialContext ccSpecial() throws RecognitionException {
		CcSpecialContext _localctx = new CcSpecialContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_ccSpecial);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 3968L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SingleSharedAtomContext extends ParserRuleContext {
		public SharedAtomContext sharedAtom() {
			return getRuleContext(SharedAtomContext.class,0);
		}
		public SingleSharedAtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleSharedAtom; }
	}

	public final SingleSharedAtomContext singleSharedAtom() throws RecognitionException {
		SingleSharedAtomContext _localctx = new SingleSharedAtomContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_singleSharedAtom);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(164);
			sharedAtom();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LiteralContext extends ParserRuleContext {
		public EscapesContext escapes() {
			return getRuleContext(EscapesContext.class,0);
		}
		public SpecialContext special() {
			return getRuleContext(SpecialContext.class,0);
		}
		public OtherContext other() {
			return getRuleContext(OtherContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_literal);
		try {
			setState(169);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(166);
				escapes();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(167);
				special();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(168);
				other();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EscapesContext extends ParserRuleContext {
		public List<TerminalNode> BACKSLASH() { return getTokens(REmatchParser.BACKSLASH); }
		public TerminalNode BACKSLASH(int i) {
			return getToken(REmatchParser.BACKSLASH, i);
		}
		public TerminalNode L_BRACK() { return getToken(REmatchParser.L_BRACK, 0); }
		public TerminalNode R_BRACK() { return getToken(REmatchParser.R_BRACK, 0); }
		public TerminalNode L_PAR() { return getToken(REmatchParser.L_PAR, 0); }
		public TerminalNode R_PAR() { return getToken(REmatchParser.R_PAR, 0); }
		public TerminalNode L_CURLY() { return getToken(REmatchParser.L_CURLY, 0); }
		public TerminalNode R_CURLY() { return getToken(REmatchParser.R_CURLY, 0); }
		public TerminalNode STAR() { return getToken(REmatchParser.STAR, 0); }
		public TerminalNode PLUS() { return getToken(REmatchParser.PLUS, 0); }
		public TerminalNode QUESTION() { return getToken(REmatchParser.QUESTION, 0); }
		public TerminalNode PIPE() { return getToken(REmatchParser.PIPE, 0); }
		public TerminalNode DOT() { return getToken(REmatchParser.DOT, 0); }
		public TerminalNode HAT() { return getToken(REmatchParser.HAT, 0); }
		public TerminalNode DOLLAR() { return getToken(REmatchParser.DOLLAR, 0); }
		public EscapesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_escapes; }
	}

	public final EscapesContext escapes() throws RecognitionException {
		EscapesContext _localctx = new EscapesContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_escapes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(171);
			match(BACKSLASH);
			setState(172);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 1736167424L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SpecialContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(REmatchParser.DOT, 0); }
		public TerminalNode TAB() { return getToken(REmatchParser.TAB, 0); }
		public TerminalNode CARRIAGE_RETURN() { return getToken(REmatchParser.CARRIAGE_RETURN, 0); }
		public TerminalNode NEWLINE() { return getToken(REmatchParser.NEWLINE, 0); }
		public TerminalNode VERTICAL_WHITESPACE() { return getToken(REmatchParser.VERTICAL_WHITESPACE, 0); }
		public TerminalNode FORM_FEED() { return getToken(REmatchParser.FORM_FEED, 0); }
		public SpecialContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_special; }
	}

	public final SpecialContext special() throws RecognitionException {
		SpecialContext _localctx = new SpecialContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_special);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 536874880L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OtherContext extends ParserRuleContext {
		public TerminalNode L_BRACK() { return getToken(REmatchParser.L_BRACK, 0); }
		public TerminalNode R_BRACK() { return getToken(REmatchParser.R_BRACK, 0); }
		public TerminalNode L_PAR() { return getToken(REmatchParser.L_PAR, 0); }
		public TerminalNode R_PAR() { return getToken(REmatchParser.R_PAR, 0); }
		public TerminalNode L_CURLY() { return getToken(REmatchParser.L_CURLY, 0); }
		public TerminalNode R_CURLY() { return getToken(REmatchParser.R_CURLY, 0); }
		public TerminalNode STAR() { return getToken(REmatchParser.STAR, 0); }
		public TerminalNode PLUS() { return getToken(REmatchParser.PLUS, 0); }
		public TerminalNode QUESTION() { return getToken(REmatchParser.QUESTION, 0); }
		public TerminalNode PIPE() { return getToken(REmatchParser.PIPE, 0); }
		public TerminalNode BACKSLASH() { return getToken(REmatchParser.BACKSLASH, 0); }
		public TerminalNode HAT() { return getToken(REmatchParser.HAT, 0); }
		public TerminalNode DOLLAR() { return getToken(REmatchParser.DOLLAR, 0); }
		public OtherContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_other; }
	}

	public final OtherContext other() throws RecognitionException {
		OtherContext _localctx = new OtherContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_other);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			_la = _input.LA(1);
			if ( _la <= 0 || ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1199296512L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SharedAtomContext extends ParserRuleContext {
		public TerminalNode DECIMAL_DIGIT() { return getToken(REmatchParser.DECIMAL_DIGIT, 0); }
		public TerminalNode NOT_DECIMAL_DIGIT() { return getToken(REmatchParser.NOT_DECIMAL_DIGIT, 0); }
		public TerminalNode WHITESPACE() { return getToken(REmatchParser.WHITESPACE, 0); }
		public TerminalNode NOT_WHITESPACE() { return getToken(REmatchParser.NOT_WHITESPACE, 0); }
		public TerminalNode ALPHANUMERIC() { return getToken(REmatchParser.ALPHANUMERIC, 0); }
		public TerminalNode NOT_ALPHANUMERIC() { return getToken(REmatchParser.NOT_ALPHANUMERIC, 0); }
		public SharedAtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sharedAtom; }
	}

	public final SharedAtomContext sharedAtom() throws RecognitionException {
		SharedAtomContext _localctx = new SharedAtomContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_sharedAtom);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 126L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuantifierContext extends ParserRuleContext {
		public TerminalNode QUESTION() { return getToken(REmatchParser.QUESTION, 0); }
		public TerminalNode PLUS() { return getToken(REmatchParser.PLUS, 0); }
		public TerminalNode STAR() { return getToken(REmatchParser.STAR, 0); }
		public TerminalNode L_CURLY() { return getToken(REmatchParser.L_CURLY, 0); }
		public QuantityContext quantity() {
			return getRuleContext(QuantityContext.class,0);
		}
		public TerminalNode R_CURLY() { return getToken(REmatchParser.R_CURLY, 0); }
		public QuantifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantifier; }
	}

	public final QuantifierContext quantifier() throws RecognitionException {
		QuantifierContext _localctx = new QuantifierContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_quantifier);
		try {
			setState(187);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case QUESTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(180);
				match(QUESTION);
				}
				break;
			case PLUS:
				enterOuterAlt(_localctx, 2);
				{
				setState(181);
				match(PLUS);
				}
				break;
			case STAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(182);
				match(STAR);
				}
				break;
			case L_CURLY:
				enterOuterAlt(_localctx, 4);
				{
				setState(183);
				match(L_CURLY);
				setState(184);
				quantity();
				setState(185);
				match(R_CURLY);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuantityContext extends ParserRuleContext {
		public QuantExactContext quantExact() {
			return getRuleContext(QuantExactContext.class,0);
		}
		public QuantRangeContext quantRange() {
			return getRuleContext(QuantRangeContext.class,0);
		}
		public QuantMinContext quantMin() {
			return getRuleContext(QuantMinContext.class,0);
		}
		public QuantMaxContext quantMax() {
			return getRuleContext(QuantMaxContext.class,0);
		}
		public QuantityContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantity; }
	}

	public final QuantityContext quantity() throws RecognitionException {
		QuantityContext _localctx = new QuantityContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_quantity);
		try {
			setState(193);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(189);
				quantExact();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(190);
				quantRange();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(191);
				quantMin();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(192);
				quantMax();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuantExactContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public QuantExactContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantExact; }
	}

	public final QuantExactContext quantExact() throws RecognitionException {
		QuantExactContext _localctx = new QuantExactContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_quantExact);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuantRangeContext extends ParserRuleContext {
		public List<NumberContext> number() {
			return getRuleContexts(NumberContext.class);
		}
		public NumberContext number(int i) {
			return getRuleContext(NumberContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(REmatchParser.COMMA, 0); }
		public QuantRangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantRange; }
	}

	public final QuantRangeContext quantRange() throws RecognitionException {
		QuantRangeContext _localctx = new QuantRangeContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_quantRange);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			number();
			setState(198);
			match(COMMA);
			setState(199);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuantMinContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(REmatchParser.COMMA, 0); }
		public QuantMinContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantMin; }
	}

	public final QuantMinContext quantMin() throws RecognitionException {
		QuantMinContext _localctx = new QuantMinContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_quantMin);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			number();
			setState(202);
			match(COMMA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuantMaxContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(REmatchParser.COMMA, 0); }
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public QuantMaxContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quantMax; }
	}

	public final QuantMaxContext quantMax() throws RecognitionException {
		QuantMaxContext _localctx = new QuantMaxContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_quantMax);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(204);
			match(COMMA);
			setState(205);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumberContext extends ParserRuleContext {
		public List<TerminalNode> DIGIT() { return getTokens(REmatchParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(REmatchParser.DIGIT, i);
		}
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_number);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(207);
				match(DIGIT);
				}
				}
				setState(210); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==DIGIT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AnchorContext extends ParserRuleContext {
		public AnchorStartContext anchorStart() {
			return getRuleContext(AnchorStartContext.class,0);
		}
		public AnchorEndContext anchorEnd() {
			return getRuleContext(AnchorEndContext.class,0);
		}
		public AnchorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anchor; }
	}

	public final AnchorContext anchor() throws RecognitionException {
		AnchorContext _localctx = new AnchorContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_anchor);
		try {
			setState(214);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case HAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(212);
				anchorStart();
				}
				break;
			case DOLLAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(213);
				anchorEnd();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AnchorStartContext extends ParserRuleContext {
		public TerminalNode HAT() { return getToken(REmatchParser.HAT, 0); }
		public AnchorStartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anchorStart; }
	}

	public final AnchorStartContext anchorStart() throws RecognitionException {
		AnchorStartContext _localctx = new AnchorStartContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_anchorStart);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			match(HAT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AnchorEndContext extends ParserRuleContext {
		public TerminalNode DOLLAR() { return getToken(REmatchParser.DOLLAR, 0); }
		public AnchorEndContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anchorEnd; }
	}

	public final AnchorEndContext anchorEnd() throws RecognitionException {
		AnchorEndContext _localctx = new AnchorEndContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_anchorEnd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(218);
			match(DOLLAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001f\u00dd\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007"+
		"\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007"+
		"\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007"+
		"\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007"+
		"\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007"+
		"\u001e\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007"+
		"\"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0005\u0001M\b\u0001\n\u0001\f\u0001P\t\u0001\u0001\u0002\u0004\u0002"+
		"S\b\u0002\u000b\u0002\f\u0002T\u0001\u0003\u0001\u0003\u0003\u0003Y\b"+
		"\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004^\b\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b"+
		"\u0001\t\u0001\t\u0005\tv\b\t\n\t\f\ty\t\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0003\n\u0081\b\n\u0001\u000b\u0001\u000b\u0003\u000b"+
		"\u0085\b\u000b\u0001\u000b\u0004\u000b\u0088\b\u000b\u000b\u000b\f\u000b"+
		"\u0089\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0003\f\u0091\b"+
		"\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0003\u000f\u009c\b\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013"+
		"\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u00aa\b\u0014"+
		"\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0017"+
		"\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0003\u0019\u00bc\b\u0019"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0003\u001a\u00c2\b\u001a"+
		"\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c"+
		"\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001e\u0001\u001e\u0001\u001e"+
		"\u0001\u001f\u0004\u001f\u00d1\b\u001f\u000b\u001f\f\u001f\u00d2\u0001"+
		" \u0001 \u0003 \u00d7\b \u0001!\u0001!\u0001\"\u0001\"\u0001\"\u0000\u0000"+
		"#\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a"+
		"\u001c\u001e \"$&(*,.02468:<>@BD\u0000\u0007\u0001\u0000\u001b\u001c\u0002"+
		"\u0000\u0016\u0017\u0019\u001a\u0001\u0000\u0007\u000b\u0005\u0000\f\f"+
		"\u000e\u0011\u0013\u0016\u0018\u001a\u001d\u001e\u0002\u0000\u0007\u000b"+
		"\u001d\u001d\u0005\u0000\f\f\u000e\u0011\u0013\u0016\u0018\u001a\u001e"+
		"\u001e\u0001\u0000\u0001\u0006\u00d4\u0000F\u0001\u0000\u0000\u0000\u0002"+
		"I\u0001\u0000\u0000\u0000\u0004R\u0001\u0000\u0000\u0000\u0006V\u0001"+
		"\u0000\u0000\u0000\b]\u0001\u0000\u0000\u0000\n_\u0001\u0000\u0000\u0000"+
		"\fc\u0001\u0000\u0000\u0000\u000ei\u0001\u0000\u0000\u0000\u0010n\u0001"+
		"\u0000\u0000\u0000\u0012s\u0001\u0000\u0000\u0000\u0014\u0080\u0001\u0000"+
		"\u0000\u0000\u0016\u0082\u0001\u0000\u0000\u0000\u0018\u0090\u0001\u0000"+
		"\u0000\u0000\u001a\u0092\u0001\u0000\u0000\u0000\u001c\u0096\u0001\u0000"+
		"\u0000\u0000\u001e\u009b\u0001\u0000\u0000\u0000 \u009d\u0001\u0000\u0000"+
		"\u0000\"\u00a0\u0001\u0000\u0000\u0000$\u00a2\u0001\u0000\u0000\u0000"+
		"&\u00a4\u0001\u0000\u0000\u0000(\u00a9\u0001\u0000\u0000\u0000*\u00ab"+
		"\u0001\u0000\u0000\u0000,\u00ae\u0001\u0000\u0000\u0000.\u00b0\u0001\u0000"+
		"\u0000\u00000\u00b2\u0001\u0000\u0000\u00002\u00bb\u0001\u0000\u0000\u0000"+
		"4\u00c1\u0001\u0000\u0000\u00006\u00c3\u0001\u0000\u0000\u00008\u00c5"+
		"\u0001\u0000\u0000\u0000:\u00c9\u0001\u0000\u0000\u0000<\u00cc\u0001\u0000"+
		"\u0000\u0000>\u00d0\u0001\u0000\u0000\u0000@\u00d6\u0001\u0000\u0000\u0000"+
		"B\u00d8\u0001\u0000\u0000\u0000D\u00da\u0001\u0000\u0000\u0000FG\u0003"+
		"\u0002\u0001\u0000GH\u0005\u0000\u0000\u0001H\u0001\u0001\u0000\u0000"+
		"\u0000IN\u0003\u0004\u0002\u0000JK\u0005\f\u0000\u0000KM\u0003\u0004\u0002"+
		"\u0000LJ\u0001\u0000\u0000\u0000MP\u0001\u0000\u0000\u0000NL\u0001\u0000"+
		"\u0000\u0000NO\u0001\u0000\u0000\u0000O\u0003\u0001\u0000\u0000\u0000"+
		"PN\u0001\u0000\u0000\u0000QS\u0003\u0006\u0003\u0000RQ\u0001\u0000\u0000"+
		"\u0000ST\u0001\u0000\u0000\u0000TR\u0001\u0000\u0000\u0000TU\u0001\u0000"+
		"\u0000\u0000U\u0005\u0001\u0000\u0000\u0000VX\u0003\b\u0004\u0000WY\u0003"+
		"2\u0019\u0000XW\u0001\u0000\u0000\u0000XY\u0001\u0000\u0000\u0000Y\u0007"+
		"\u0001\u0000\u0000\u0000Z^\u0003\n\u0005\u0000[^\u0003\f\u0006\u0000\\"+
		"^\u0003\u0014\n\u0000]Z\u0001\u0000\u0000\u0000][\u0001\u0000\u0000\u0000"+
		"]\\\u0001\u0000\u0000\u0000^\t\u0001\u0000\u0000\u0000_`\u0005\u0010\u0000"+
		"\u0000`a\u0003\u0002\u0001\u0000ab\u0005\u0011\u0000\u0000b\u000b\u0001"+
		"\u0000\u0000\u0000cd\u0005\r\u0000\u0000de\u0003\u0012\t\u0000ef\u0005"+
		"\u000e\u0000\u0000fg\u0003\u0002\u0001\u0000gh\u0005\u000f\u0000\u0000"+
		"h\r\u0001\u0000\u0000\u0000ij\u0005\r\u0000\u0000jk\u0005\r\u0000\u0000"+
		"kl\u0003\u0012\t\u0000lm\u0005\u000e\u0000\u0000m\u000f\u0001\u0000\u0000"+
		"\u0000no\u0005\u000f\u0000\u0000op\u0003\u0012\t\u0000pq\u0005\r\u0000"+
		"\u0000qr\u0005\r\u0000\u0000r\u0011\u0001\u0000\u0000\u0000sw\u0005\u001b"+
		"\u0000\u0000tv\u0007\u0000\u0000\u0000ut\u0001\u0000\u0000\u0000vy\u0001"+
		"\u0000\u0000\u0000wu\u0001\u0000\u0000\u0000wx\u0001\u0000\u0000\u0000"+
		"x\u0013\u0001\u0000\u0000\u0000yw\u0001\u0000\u0000\u0000z\u0081\u0003"+
		"\u000e\u0007\u0000{\u0081\u0003\u0010\b\u0000|\u0081\u0003\u0016\u000b"+
		"\u0000}\u0081\u0003&\u0013\u0000~\u0081\u0003(\u0014\u0000\u007f\u0081"+
		"\u0003@ \u0000\u0080z\u0001\u0000\u0000\u0000\u0080{\u0001\u0000\u0000"+
		"\u0000\u0080|\u0001\u0000\u0000\u0000\u0080}\u0001\u0000\u0000\u0000\u0080"+
		"~\u0001\u0000\u0000\u0000\u0080\u007f\u0001\u0000\u0000\u0000\u0081\u0015"+
		"\u0001\u0000\u0000\u0000\u0082\u0084\u0005\u0018\u0000\u0000\u0083\u0085"+
		"\u0005\u0016\u0000\u0000\u0084\u0083\u0001\u0000\u0000\u0000\u0084\u0085"+
		"\u0001\u0000\u0000\u0000\u0085\u0087\u0001\u0000\u0000\u0000\u0086\u0088"+
		"\u0003\u0018\f\u0000\u0087\u0086\u0001\u0000\u0000\u0000\u0088\u0089\u0001"+
		"\u0000\u0000\u0000\u0089\u0087\u0001\u0000\u0000\u0000\u0089\u008a\u0001"+
		"\u0000\u0000\u0000\u008a\u008b\u0001\u0000\u0000\u0000\u008b\u008c\u0005"+
		"\u0019\u0000\u0000\u008c\u0017\u0001\u0000\u0000\u0000\u008d\u0091\u0003"+
		"\u001a\r\u0000\u008e\u0091\u00030\u0018\u0000\u008f\u0091\u0003\u001c"+
		"\u000e\u0000\u0090\u008d\u0001\u0000\u0000\u0000\u0090\u008e\u0001\u0000"+
		"\u0000\u0000\u0090\u008f\u0001\u0000\u0000\u0000\u0091\u0019\u0001\u0000"+
		"\u0000\u0000\u0092\u0093\u0003\u001e\u000f\u0000\u0093\u0094\u0005\u0017"+
		"\u0000\u0000\u0094\u0095\u0003\u001e\u000f\u0000\u0095\u001b\u0001\u0000"+
		"\u0000\u0000\u0096\u0097\u0003\u001e\u000f\u0000\u0097\u001d\u0001\u0000"+
		"\u0000\u0000\u0098\u009c\u0003 \u0010\u0000\u0099\u009c\u0003$\u0012\u0000"+
		"\u009a\u009c\u0003\"\u0011\u0000\u009b\u0098\u0001\u0000\u0000\u0000\u009b"+
		"\u0099\u0001\u0000\u0000\u0000\u009b\u009a\u0001\u0000\u0000\u0000\u009c"+
		"\u001f\u0001\u0000\u0000\u0000\u009d\u009e\u0005\u001a\u0000\u0000\u009e"+
		"\u009f\u0007\u0001\u0000\u0000\u009f!\u0001\u0000\u0000\u0000\u00a0\u00a1"+
		"\b\u0001\u0000\u0000\u00a1#\u0001\u0000\u0000\u0000\u00a2\u00a3\u0007"+
		"\u0002\u0000\u0000\u00a3%\u0001\u0000\u0000\u0000\u00a4\u00a5\u00030\u0018"+
		"\u0000\u00a5\'\u0001\u0000\u0000\u0000\u00a6\u00aa\u0003*\u0015\u0000"+
		"\u00a7\u00aa\u0003,\u0016\u0000\u00a8\u00aa\u0003.\u0017\u0000\u00a9\u00a6"+
		"\u0001\u0000\u0000\u0000\u00a9\u00a7\u0001\u0000\u0000\u0000\u00a9\u00a8"+
		"\u0001\u0000\u0000\u0000\u00aa)\u0001\u0000\u0000\u0000\u00ab\u00ac\u0005"+
		"\u001a\u0000\u0000\u00ac\u00ad\u0007\u0003\u0000\u0000\u00ad+\u0001\u0000"+
		"\u0000\u0000\u00ae\u00af\u0007\u0004\u0000\u0000\u00af-\u0001\u0000\u0000"+
		"\u0000\u00b0\u00b1\b\u0005\u0000\u0000\u00b1/\u0001\u0000\u0000\u0000"+
		"\u00b2\u00b3\u0007\u0006\u0000\u0000\u00b31\u0001\u0000\u0000\u0000\u00b4"+
		"\u00bc\u0005\u0013\u0000\u0000\u00b5\u00bc\u0005\u0014\u0000\u0000\u00b6"+
		"\u00bc\u0005\u0015\u0000\u0000\u00b7\u00b8\u0005\u000e\u0000\u0000\u00b8"+
		"\u00b9\u00034\u001a\u0000\u00b9\u00ba\u0005\u000f\u0000\u0000\u00ba\u00bc"+
		"\u0001\u0000\u0000\u0000\u00bb\u00b4\u0001\u0000\u0000\u0000\u00bb\u00b5"+
		"\u0001\u0000\u0000\u0000\u00bb\u00b6\u0001\u0000\u0000\u0000\u00bb\u00b7"+
		"\u0001\u0000\u0000\u0000\u00bc3\u0001\u0000\u0000\u0000\u00bd\u00c2\u0003"+
		"6\u001b\u0000\u00be\u00c2\u00038\u001c\u0000\u00bf\u00c2\u0003:\u001d"+
		"\u0000\u00c0\u00c2\u0003<\u001e\u0000\u00c1\u00bd\u0001\u0000\u0000\u0000"+
		"\u00c1\u00be\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001\u0000\u0000\u0000"+
		"\u00c1\u00c0\u0001\u0000\u0000\u0000\u00c25\u0001\u0000\u0000\u0000\u00c3"+
		"\u00c4\u0003>\u001f\u0000\u00c47\u0001\u0000\u0000\u0000\u00c5\u00c6\u0003"+
		">\u001f\u0000\u00c6\u00c7\u0005\u0012\u0000\u0000\u00c7\u00c8\u0003>\u001f"+
		"\u0000\u00c89\u0001\u0000\u0000\u0000\u00c9\u00ca\u0003>\u001f\u0000\u00ca"+
		"\u00cb\u0005\u0012\u0000\u0000\u00cb;\u0001\u0000\u0000\u0000\u00cc\u00cd"+
		"\u0005\u0012\u0000\u0000\u00cd\u00ce\u0003>\u001f\u0000\u00ce=\u0001\u0000"+
		"\u0000\u0000\u00cf\u00d1\u0005\u001c\u0000\u0000\u00d0\u00cf\u0001\u0000"+
		"\u0000\u0000\u00d1\u00d2\u0001\u0000\u0000\u0000\u00d2\u00d0\u0001\u0000"+
		"\u0000\u0000\u00d2\u00d3\u0001\u0000\u0000\u0000\u00d3?\u0001\u0000\u0000"+
		"\u0000\u00d4\u00d7\u0003B!\u0000\u00d5\u00d7\u0003D\"\u0000\u00d6\u00d4"+
		"\u0001\u0000\u0000\u0000\u00d6\u00d5\u0001\u0000\u0000\u0000\u00d7A\u0001"+
		"\u0000\u0000\u0000\u00d8\u00d9\u0005\u0016\u0000\u0000\u00d9C\u0001\u0000"+
		"\u0000\u0000\u00da\u00db\u0005\u001e\u0000\u0000\u00dbE\u0001\u0000\u0000"+
		"\u0000\u000fNTX]w\u0080\u0084\u0089\u0090\u009b\u00a9\u00bb\u00c1\u00d2"+
		"\u00d6";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}