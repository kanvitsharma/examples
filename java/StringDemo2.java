class StringDemo2 {
	public static void main(String args[]) {
		String str_1 = "First String", str_2 = "Second String", str_3 = str_1;

		System.out.println("Length of str_1: " + str_1.length());
		System.out.println("Char at index 3 of str_1: " + str_1.charAt(3));

		if(str_1.equals(str_2)) System.out.print("str_1 and str_2 are same.");
		else if(str_1.equals(str_3)) System.out.print("str_1 and str_3 are same.");
		else System.out.print("Strings are distinct.");
	}
}