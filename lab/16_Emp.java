import java.util.Scanner;

class InvalidEmployeeDataException extends Exception {
    public InvalidEmployeeDataException(String message) {
        super(message);
    }
}

public class EmployeeDetails {
    private int employeeId;
    private String employeeName;
    private int deptId;

    public EmployeeDetails(int employeeId, String employeeName, int deptId) throws InvalidEmployeeDataException {
        if (!Character.isUpperCase(employeeName.charAt(0))) {
            throw new InvalidEmployeeDataException("First letter of employee name should be in capital letter.");
        }
        if (employeeId < 2001 || employeeId > 5001) {
            throw new InvalidEmployeeDataException("Employee id should be between 2001 and 5001.");
        }
        if (deptId < 1 || deptId > 5) {
            throw new InvalidEmployeeDataException("Department id should be an integer between 1 and 5.");
        }
        this.employeeId = employeeId;
        this.employeeName = employeeName;
        this.deptId = deptId;
    }

    @Override
    public String toString() {
        return "Employee Details:\n" +
               "Employee ID: " + employeeId + "\n" +
               "Employee Name: " + employeeName + "\n" +
               "Department ID: " + deptId;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter employee id: ");
            int employeeId = Integer.parseInt(scanner.nextLine());

            System.out.print("Enter employee name: ");
            String employeeName = scanner.nextLine();

            System.out.print("Enter department id: ");
            int deptId = Integer.parseInt(scanner.nextLine());

            EmployeeDetails employee = new EmployeeDetails(employeeId, employeeName, deptId);
            System.out.println(employee);
        } catch (NumberFormatException e) {
            System.out.println("Invalid input: Department ID and Employee ID should be integers.");
        } catch (InvalidEmployeeDataException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("An unexpected error occurred: " + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
