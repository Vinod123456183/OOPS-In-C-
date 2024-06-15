class IBE extends Exception{
    public IBE (String Message) {
        super(Message);
    }
}

class IWE extends Exception {
    public IWE(String Message) {
        super(Message);
    }
}

public class Bank {
    
    private String name ;
    private String Atype;
    private int AcN;
    private int Balance;

    public Bank(String name , String Atype, int AcN , int Balance) {
        this.name=name;
        this.Atype = Atype;
        this.AcN=AcN;
        this.Balance=Balance;
    }

        public void deposit(int amount) throws IBE{

            if(amount > 0)  {
                Balance += amount;
                System.out.println("New Balance After Deposit " + Balance);
            }
            else {
                throw new IBE("Deposit Must Positive ");
            }

        }

        public void Withdraw (int amount) throws IWE{
            if(amount > 0) {
                if(amount < Balance) {
                    Balance -= amount;
                    System.out.println("After Withdraw "+amount);
                }
                else{
                    System.out.println("-ve ");
                }
                    
            }
            else {
                throw new IWE("Less");
            }
        }
    

        public void display() {
            System.out.println("Name " + name);
            System.out.println("Account Type " + Atype);
            System.out.println("Acc No " + AcN);
            System.out.println("Balance "+ Balance);
        }
        public static void  main(String[]args) {
            
            Bank b = new Bank("V", "Savings", 123456789, 1000);

            b.display();
            System.out.println();
            try {
                b.deposit(0);
                b.display();
                System.out.println();
                b.Withdraw(1500);
                b.display();
                System.out.println();
            } 
            catch (IBE e) {
                System.out.println(e.getMessage());
            } 
            catch (IWE e) {
                System.out.println(e.getMessage());
            }

        }
}
