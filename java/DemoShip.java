class Box {
	private double width, height, depth;

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
	
	BoxWeight(BoxWeight ob) {
		super(ob);
		weight = ob.weight;
	}

	BoxWeight(double w, double h, double d, double m) {
		super(w, h, d);
		weight = m;
	}

	BoxWeight() {
		super();
		weight = -1;
	}

	BoxWeight(double len, double m) {
		super(len);
		weight = m;
	}
}

class Shipment extends BoxWeight{
	double cost;

	Shipment(Shipment ob) {
		super(ob);
		cost = ob.cost;
	}

	Shipment(double w, double h, double d, double m, double c) {
		super(w, h, d, m);
		cost = c;
	}
}

class DemoShip {
	public static void main(String args[]) {
		Shipment ship_1 = new Shipment(10, 20, 15, 10, 3.41), ship_2 = new Shipment(2, 3, 4, 0.76, 1.28);

		System.out.println("Shipment #1:");
		System.out.println("Volume: " + ship_1.volume() + "\nWeight: " + ship_1.weight + "\nCost: " + ship_1.cost);

		System.out.println("Shipment #2:");
		System.out.println("Volume: " + ship_2.volume() + "\nWeight: " + ship_2.weight + "\nCost: " + ship_2.cost);
	}
} 