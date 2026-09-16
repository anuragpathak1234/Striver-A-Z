public class SecondLargest {

    public static void main(String[] args) {

        int[] arr = {5, 4, 6, 1, 3, 2};

        secondLargest(arr);


    }

    static void secondLargest(int[] arr) {

        int Max = arr[0];
        int second_max = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > Max) {
                Max = arr[i];
            }
        }

        for (int j = 0; j < arr.length; j++) {
            if ( arr[j] != Max && arr[j] > second_max) {
                second_max = arr[j];
            }
        }

        System.out.println(second_max);
    }
}
