public class Main {
    public static void main(String[] args) {
        Employee tiya = new Employee("tiya", "joshi", "36 A Subhash Nagar", 10000, "123456789");

        System.out.println("GET SSN" + tiya.getSSN());
        System.out.println("SET SSN" + tiya.setSSN());

    }
}