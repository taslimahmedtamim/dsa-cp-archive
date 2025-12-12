import java.io.*;
import java.util.*;

public class Cp {
    public static void main(String[] args) throws IOException {
        // Fast input
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // Fast output
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();

        int t = Integer.parseInt(br.readLine()); // number of test cases

        while (t-- > 0) {
            // Example: Read a line of space-separated integers
            String[] input = br.readLine().split(" ");
            
            // Optional: Convert to integers
            int[] nums = new int[input.length];
            for (int i = 0; i < input.length; i++) {
                nums[i] = Integer.parseInt(input[i]);
            }

            // TODO: Your logic here

            sb.append("Result here").append("\n");  // collect output
        }

        // Print all output at once (faster than printing each time)
        bw.write(sb.toString());
        bw.flush();
        bw.close();
    }
}
