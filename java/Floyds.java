class Floyds {
	public static void main(String args[]) {
		int floyd[][] = new int[4][];
		floyd[0] = new int[1];
		floyd[1] = new int[2];
		floyd[2] = new int[3];
		floyd[3] = new int[4];
	
		int k = 0;

		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < i + 1; j++) {
				floyd[i][j] = k;
				System.out.print(k + " ");
				k++;
			}
			System.out.println();
		}
	}
}

	
	