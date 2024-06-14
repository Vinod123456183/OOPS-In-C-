class LowBalanceException extends Exception {
    public LowBalanceException(String message) {
        super(message);
    }
}

class BankClient {
    String name;
    int accountNo;
    double amount;

    public BankClient(String name, int accountNo, double amount) {
        this.name = name;
        this.accountNo = accountNo;
        this.amount = amount;
    }

    public void withdraw(double withdrawAmount) throws LowBalanceException {
        if (withdrawAmount > amount) {
            throw new LowBalanceException("Your account has a low balance.");
        } else {
            amount -= withdrawAmount;
            System.out.println("Withdrawal successful. Remaining balance: " + amount);
        }
    }
}

public class Bank {
    public static void main(String[] args) {
        BankClient client = new BankClient("xyz", 101, 5000);
        try {
            client.withdraw(5000);
        } catch (LowBalanceException e) {
            System.out.println(e.getMessage());
        }
    }
}
