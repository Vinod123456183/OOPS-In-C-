class Employee {
    private int id;
    private String name;
    private String department;
    private String city;
    private double salary;

    // Constructor chaining
    // Constructor with all parameters
    public Employee(int id, String name, String department, String city, double salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.city = city;
        this.salary = salary;
    }

    // Constructor with ID and Name
    public Employee(int id, String name) {
        this(id, name, "Unknown", "Unknown", 0.0);
    }

    // Constructor with ID, Name, and Department
    public Employee(int id, String name, String department) {
        this(id, name, department, "Unknown", 0.0);
    }

    // Constructor with ID, Name, Department, and City
    public Employee(int id, String name, String department, String city) {
        this(id, name, department, city, 0.0);
    }

    // Default constructor
    public Employee() {
        this(0, "Unknown", "Unknown", "Unknown", 0.0);
    }

    // Method to display employee details
    public void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("City: " + city);
        System.out.println("Salary: " + salary);
    }

    public static void main(String[] args) {
      
        Employee emp1 = new Employee(1, "John Doe", "Engineering", "New York", 75000);
        Employee emp2 = new Employee(2, "Jane Smith", "Marketing");
        Employee emp3 = new Employee(3, "Alice Johnson");
        Employee emp4 = new Employee();
      
        emp1.display();
        System.out.println();
        emp2.display();
        System.out.println();
        emp3.display();
        System.out.println();
        emp4.display();
    }
}
