import java.time.*;
import java.time.format.DateTimeFormatter;
import java.io.*;
import java.util.*;

class Logger {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		LocalDateTime today = LocalDateTime.now();
		DateTimeFormatter formatter = DateTimeFormatter.ISO_DATE;
		String name = today.format(formatter), resp;

		name += ".txt";

		try {
			File logfile = new File(name);
			FileWriter hdr = new FileWriter(name, true);
			BufferedWriter finput = new BufferedWriter(hdr);

			if(logfile.createNewFile()) {
				System.out.println("File created: " + logfile.getName());
			} else {
				System.out.print("Task Done (1) or Comment (2): ");
				int respo = Integer.parseInt(in.nextLine());
				
				if(respo == 1) {
					System.out.print("Enter task done: ");

					resp = in.nextLine();

					finput.write(today + ": Task done: " + resp + "\n");
					finput.close();
				} else if(respo == 2) {
					System.out.print("Enter comment: ");

					resp = in.nextLine();

					finput.write(today + ": " + resp + "\n");
					finput.close();
				}
				
			}
		} catch(IOException e) {
			System.out.println("ERROR");
		}
	}
}	