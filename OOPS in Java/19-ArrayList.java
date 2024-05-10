import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        System.out.println("ArrayList elements: " + numbers.getFirst());
        System.out.println("ArrayList elements: " + numbers);
        System.out.println("Element at index 1: " + numbers.get(1));
        System.out.println("Contains 20? " + numbers.contains(20));
        numbers.remove(0);
        System.out.println("After removing element at index 0: " + numbers);
        System.out.println("Iterating over ArrayList:");
        for (int num : numbers) 
            System.out.println(num);
        System.out.println("Size of ArrayList: " + numbers.size());
        numbers.clear();
        System.out.println("ArrayList after clearing: " + numbers);
    }
}
