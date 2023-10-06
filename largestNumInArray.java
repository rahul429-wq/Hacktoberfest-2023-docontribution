import java.util.*;

public class largestNumInArray {
    
    public static int getlargest(int numbers[]){
        int largest = Integer.MIN_VALUE;  
        int smallest = Integer.MAX_VALUE;  

        for(int i = 0; i < numbers.length; i++){
            if(largest < numbers[i]){
                largest = numbers[i];
            }
            if(smallest > numbers[i]){
                smallest = numbers[i];
            }
        }
                    System.out.println(smallest);

        return largest;
    }

    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int numbers[] = {1,2,6,3,5};
        System.out.println("largest value is : "+ getlargest(numbers));

        sc.close();
    }
}

