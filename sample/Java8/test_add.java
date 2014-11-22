package aaa.bbb;

import ccc.ddd;

public final static class Hoge<T> extends Hogehoge {
	private String A = "Peg4D";
	public int b = 999_999_999;

	public boolean piyo(T X, ArrayList<T> Y) {
		class Inner<T> {
			double i, j, k;

			Inner() {
				i = j = k = 0.0d;
			}
		}
		Inner<Double> C = new Inner<>();
		int d = 0;
		return true;
	}
}

class Fuga {
	Fuga() {
		Hoge<?> X = new Hoge<?>();
		Piyo Y = X.new Piyo();
	}
}
