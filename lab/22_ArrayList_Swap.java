import java.util.ArrayList;
public class SwapPairs {
public static void swapPairs(ArrayList<String> list) {
for (int i = 0; i < list.size() - 1; i += 2) {
// Swap the elements at index i and i+1
String temp = list.get(i);
list.set(i, list.get(i + 1));
list.set(i + 1, temp);
}
}
public static void main(String[] args) {
// Example 1
ArrayList<String> list1 = new ArrayList<>();
list1.add("four");
list1.add("score");
list1.add("and");
list1.add("seven");
list1.add("years");
list1.add("ago");
System.out.println("Original list 1: " + list1);
swapPairs(list1);
System.out.println("Modified list 1: " + list1);
ArrayList<String> list2 = new ArrayList<>();
list2.add("to");
list2.add("be");
list2.add("or");
list2.add("not");
list2.add("to");
list2.add("be");
list2.add("hamlet");
System.out.println("Original list 2: " + list2);
swapPairs(list2);
System.out.println("Modified list 2: " + list2);
}
}
