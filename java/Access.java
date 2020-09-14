class A {
	int i;
	private int j;

	void setij(int x, int y) {
		i = x;
		j = y;
	}
}

class B extends A {
	int sum() {
		return(i + j);
	}
}

class Access {
	public static void main(String args[]) {
		B ob_1 = new B();

		ob_1.setij(10, 12);
		System.out.println("Total: " + ob_1.sum());
	}
}