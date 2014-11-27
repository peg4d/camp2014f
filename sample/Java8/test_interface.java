package aaa.bbb;

import ccc.ddd;

public interface Hoge extends Hogehoge, Fuga {
	String A = "Peg4D";

	boolean piyo(T X, ArrayList<T> Y);
}

public @interface Piyopiyo {
	static int b;

	boolean piyo() default false;
}
