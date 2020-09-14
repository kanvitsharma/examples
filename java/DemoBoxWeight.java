class Box {
	double width, height, depth;

	Box(Box ob) {
		width = ob.width;
		height = ob.height;
		depth = ob.depth;
	}

	Box(double w, double h, double d) {
		width = w;
		height = h;
		depth = d;
	}

	Box() {
		width = -1;
		height = -1;
		width = -1;
	}

	Box(double len) {
		width = height = depth = len;
	}

	double volume() {
		return width * height * depth;
	}
}

class BoxWeight extends Box {
	double weight;
	
	BoxWeight(double w, double h, double d, double m) {
		width = w;
		height = h;
		depth = d;
		weight = m;
	}
}

class DemoBoxWeight {
	public static void main(String args[]) {
		BoxWeight box_1 = new BoxWeight(10, 20, 15, 34.3);
		BoxWeight box_2 = new BoxWeight(2, 3, 4, 0.076);

		System.out.println("Volume of box 1: " + box_1.volume() + "\nWeight of box 1: " + box_1.weight);

		System.out.println("Volume of box 2: " + box_2.volume() + "\nWeight of box 1: " + box_2.weight);
	}
}

	
		
			