package aaa;

import bbb.MyList;

public class Hoge {
	public boolean piyo(MyList X) {
		assert(X != null);
		for(Integer I : X) {
			System.out.println("i = " + I.toString);
		}
	}
}
