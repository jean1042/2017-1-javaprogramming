
public class BankAccountTest {
	public static void main(String args[]){
		
		System.out.println("BankAccountTest �� ���� �Լ�");
		
		//BankAccount1�� �� ��ü a1 �� a2 ����
		BankAccount1 a1=new BankAccount1();
		BankAccount1 a2=new BankAccount1();
		
		
		//a1�� �ܰ� 100���� �Ѵ�.
		a1.deposit(100);
		//a2�� �ܰ� 50���� �Ѵ�.
		a2.deposit(50);
		//a1���� 60�� �����Ѵ�.
		a1.withdraw(60);
		//a2���� 30�� �����Ѵ�.
		a2.withdraw(30);
	
		System.out.println("------------------");
	//printBalance Test
		a1.PrintBalance();
		a2.PrintBalance();
		
		System.out.println("------------------");
	//addInterest Test
		a1.addInterest(a1.getBalance());
		System.out.println("a1�� �� ���ڴ�"+(int)a1.addInterest(a1.getBalance()));
	
		System.out.println("------------------");
	//�ܾ� �Ѱ� �����ϴ� ��� withdraw �Լ� Test
		a1.withdraw(50);
		a1.PrintBalance();
		
		a1.deposit(100);
		a1.PrintBalance();
		System.out.println("------------------");

	
	}
	
}
