import java.sql.*;

public class Main {

    public static void main(String[] args) {
        
        String JDBC_URL = "jdbc:mysql://localhost:3306/EmployeeDatabase";
        String USERNAME = "root";
        String PASSWORD = "root";

        Connection connection = null;
        Statement statement = null;
        ResultSet resultSet = null;

        try {
            connection = DriverManager.getConnection(JDBC_URL, USERNAME, PASSWORD);
            // Creating a SQL statement
            statement = connection.createStatement();
            
            // Inserting a new record into the table
            String insertQuery = "INSERT INTO Employee (name, gender, address) VALUES ('Kapil', 'M', 'Delhi')";
            statement.executeUpdate(insertQuery);

            // Displaying the contents of the table
            String selectQuery = "SELECT * FROM Employee";
            resultSet = statement.executeQuery(selectQuery);

            System.out.println("ID\tName\tGender\tAddress");
            while (resultSet.next()) {
                int id = resultSet.getInt("id");
                String name = resultSet.getString("name");
                String gender = resultSet.getString("gender");
                String address = resultSet.getString("address");
                System.out.println(id + "\t" + name + "\t" + gender + "\t" + address);
            }
        } 

            catch (SQLException e) {
            e.printStackTrace();
            } 

        finally  {
            
            try   {
                if (connection != null) connection.close();
                if (statement != null) statement.close();
                if (resultSet != null) resultSet.close();
            } 

            catch (SQLException e)  {
                e.printStackTrace();
            }

        }
    }
}
