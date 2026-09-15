public class LinearSearch {

    public static void main(String[] args){

        int[] arr = {6,7,9,4,1,0};
        int target = 0;

       System.out.println("Target fount at index " + LinearSearch(arr,target));
    }

    static int LinearSearch(int[] arr, int target){

        for(int i = 0; i < arr.length; i++){
            if(arr[i] == target){
                return i;
            }
        }

        return 0;
    }

}
