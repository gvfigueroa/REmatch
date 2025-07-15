// Generated from /home/verena/projects/ipre/REmatch/src/rematch/parsing/grammar/REmatchLexer.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class REmatchLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"DECIMAL_DIGIT", "NOT_DECIMAL_DIGIT", "WHITESPACE", "NOT_WHITESPACE", 
			"ALPHANUMERIC", "NOT_ALPHANUMERIC", "TAB", "CARRIAGE_RETURN", "NEWLINE", 
			"VERTICAL_WHITESPACE", "FORM_FEED", "PIPE", "EXCLAMAITON", "L_CURLY", 
			"R_CURLY", "L_PAR", "R_PAR", "COMMA", "QUESTION", "PLUS", "STAR", "HAT", 
			"HYPHEN", "L_BRACK", "R_BRACK", "BACKSLASH", "ALPHA", "DIGIT", "DOT", 
			"DOLLAR", "UNRECOGNIZED"
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


	public REmatchLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "REmatchLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u001f\u0088\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0002\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d"+
		"\u0002\u001e\u0007\u001e\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001"+
		"\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001"+
		"\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013"+
		"\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0016"+
		"\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0019"+
		"\u0001\u0019\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001\u001c"+
		"\u0001\u001c\u0001\u001d\u0001\u001d\u0001\u001e\u0001\u001e\u0000\u0000"+
		"\u001f\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006"+
		"\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e"+
		"\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017"+
		"/\u00181\u00193\u001a5\u001b7\u001c9\u001d;\u001e=\u001f\u0001\u0000\u0002"+
		"\u0002\u0000AZaz\u0001\u000009\u0087\u0000\u0001\u0001\u0000\u0000\u0000"+
		"\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000"+
		"\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000"+
		"\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f"+
		"\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013"+
		"\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017"+
		"\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b"+
		"\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000\u001f"+
		"\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001\u0000"+
		"\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000\u0000"+
		"\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001\u0000\u0000\u0000\u0000"+
		"-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000\u00001\u0001"+
		"\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005\u0001\u0000\u0000"+
		"\u0000\u00007\u0001\u0000\u0000\u0000\u00009\u0001\u0000\u0000\u0000\u0000"+
		";\u0001\u0000\u0000\u0000\u0000=\u0001\u0000\u0000\u0000\u0001?\u0001"+
		"\u0000\u0000\u0000\u0003B\u0001\u0000\u0000\u0000\u0005E\u0001\u0000\u0000"+
		"\u0000\u0007H\u0001\u0000\u0000\u0000\tK\u0001\u0000\u0000\u0000\u000b"+
		"N\u0001\u0000\u0000\u0000\rQ\u0001\u0000\u0000\u0000\u000fT\u0001\u0000"+
		"\u0000\u0000\u0011W\u0001\u0000\u0000\u0000\u0013Z\u0001\u0000\u0000\u0000"+
		"\u0015]\u0001\u0000\u0000\u0000\u0017`\u0001\u0000\u0000\u0000\u0019b"+
		"\u0001\u0000\u0000\u0000\u001bd\u0001\u0000\u0000\u0000\u001df\u0001\u0000"+
		"\u0000\u0000\u001fh\u0001\u0000\u0000\u0000!j\u0001\u0000\u0000\u0000"+
		"#l\u0001\u0000\u0000\u0000%n\u0001\u0000\u0000\u0000\'p\u0001\u0000\u0000"+
		"\u0000)r\u0001\u0000\u0000\u0000+t\u0001\u0000\u0000\u0000-v\u0001\u0000"+
		"\u0000\u0000/x\u0001\u0000\u0000\u00001z\u0001\u0000\u0000\u00003|\u0001"+
		"\u0000\u0000\u00005~\u0001\u0000\u0000\u00007\u0080\u0001\u0000\u0000"+
		"\u00009\u0082\u0001\u0000\u0000\u0000;\u0084\u0001\u0000\u0000\u0000="+
		"\u0086\u0001\u0000\u0000\u0000?@\u0005\\\u0000\u0000@A\u0005d\u0000\u0000"+
		"A\u0002\u0001\u0000\u0000\u0000BC\u0005\\\u0000\u0000CD\u0005D\u0000\u0000"+
		"D\u0004\u0001\u0000\u0000\u0000EF\u0005\\\u0000\u0000FG\u0005s\u0000\u0000"+
		"G\u0006\u0001\u0000\u0000\u0000HI\u0005\\\u0000\u0000IJ\u0005S\u0000\u0000"+
		"J\b\u0001\u0000\u0000\u0000KL\u0005\\\u0000\u0000LM\u0005w\u0000\u0000"+
		"M\n\u0001\u0000\u0000\u0000NO\u0005\\\u0000\u0000OP\u0005W\u0000\u0000"+
		"P\f\u0001\u0000\u0000\u0000QR\u0005\\\u0000\u0000RS\u0005t\u0000\u0000"+
		"S\u000e\u0001\u0000\u0000\u0000TU\u0005\\\u0000\u0000UV\u0005r\u0000\u0000"+
		"V\u0010\u0001\u0000\u0000\u0000WX\u0005\\\u0000\u0000XY\u0005n\u0000\u0000"+
		"Y\u0012\u0001\u0000\u0000\u0000Z[\u0005\\\u0000\u0000[\\\u0005v\u0000"+
		"\u0000\\\u0014\u0001\u0000\u0000\u0000]^\u0005\\\u0000\u0000^_\u0005f"+
		"\u0000\u0000_\u0016\u0001\u0000\u0000\u0000`a\u0005|\u0000\u0000a\u0018"+
		"\u0001\u0000\u0000\u0000bc\u0005!\u0000\u0000c\u001a\u0001\u0000\u0000"+
		"\u0000de\u0005{\u0000\u0000e\u001c\u0001\u0000\u0000\u0000fg\u0005}\u0000"+
		"\u0000g\u001e\u0001\u0000\u0000\u0000hi\u0005(\u0000\u0000i \u0001\u0000"+
		"\u0000\u0000jk\u0005)\u0000\u0000k\"\u0001\u0000\u0000\u0000lm\u0005,"+
		"\u0000\u0000m$\u0001\u0000\u0000\u0000no\u0005?\u0000\u0000o&\u0001\u0000"+
		"\u0000\u0000pq\u0005+\u0000\u0000q(\u0001\u0000\u0000\u0000rs\u0005*\u0000"+
		"\u0000s*\u0001\u0000\u0000\u0000tu\u0005^\u0000\u0000u,\u0001\u0000\u0000"+
		"\u0000vw\u0005-\u0000\u0000w.\u0001\u0000\u0000\u0000xy\u0005[\u0000\u0000"+
		"y0\u0001\u0000\u0000\u0000z{\u0005]\u0000\u0000{2\u0001\u0000\u0000\u0000"+
		"|}\u0005\\\u0000\u0000}4\u0001\u0000\u0000\u0000~\u007f\u0007\u0000\u0000"+
		"\u0000\u007f6\u0001\u0000\u0000\u0000\u0080\u0081\u0007\u0001\u0000\u0000"+
		"\u00818\u0001\u0000\u0000\u0000\u0082\u0083\u0005.\u0000\u0000\u0083:"+
		"\u0001\u0000\u0000\u0000\u0084\u0085\u0005$\u0000\u0000\u0085<\u0001\u0000"+
		"\u0000\u0000\u0086\u0087\t\u0000\u0000\u0000\u0087>\u0001\u0000\u0000"+
		"\u0000\u0001\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}