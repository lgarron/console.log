package console;

import java.util.Arrays;

public class console {
	public static void log(Object... args) {
		for(int i = 0; i < args.length; ++i) {
			if(args[i].getClass().isArray()) {
				Object[] arr = {args[i]};
				String arrayString = Arrays.deepToString(arr);
				arrayString = arrayString.substring(1, arrayString.length()-1);
				System.out.print(arrayString + " ");
			}
			else
				System.out.print(args[i].toString() + " ");
		}
		System.out.println();
	}
}
