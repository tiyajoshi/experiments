public class Employee {
    private string firstName;
    private string lastName;
    private string address;
    private int salary;
    private string ssn;
    private string city;

    public Employee(string firstName, string lastName, string address, int salary, string ssn) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.address = address;
        this.salary = salary;
        this.ssn = ssn;
    }

    public string getFirstName() {
        return firstName;
    }
    
    public void setFirstName(string firstName) {
        this.firstName = firstName;
    }

    public string getSSN() {
        return this.ssn;
    }

    private void setSSN(string ssn) {
        this.ssn = ssn;
    }
}