class A {
	int i, j;

	void showij() {
		System.out.println("i: " + i + "\nj: " + j);
	}
}

class B extends A {
	int k;

	void showk() {
		System.out.println("\nk: " + k);
	}

	void sum() {
		System.out.println("\nsum(i, j, k): " + (i + j + k));
	}
}

class SimpleInheritance {
	public static void main(String args[]) {
		A ob_1 = new A();
		B ob_2 = new B();

		ob_1.i = 10;
		ob_1.j = 20;

		System.out.println("Contents of ob_1:");
		ob_1.showij();

		ob_2.i = 7;
		ob_2.j = 8;
		ob_2.k = 9;

		System.out.println("Contents of ob_2");
		ob_2.showij();
		ob_2.showk();

		ob_2.sum();
	}
}
