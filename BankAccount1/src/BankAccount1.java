public class BankAccount1 {
	//�ܾ��� ��Ÿ���� ����
	int balance;
	
	//���� �޼ҵ�
	void deposit(int userMoney){
		balance+=userMoney;
	System.out.println(userMoney+"�� �� ���ݵǾ����ϴ�.");	
	}
	
	//��� �޼ҵ�
	int withdraw (int userMoney)
	{
	if (balance< userMoney){
		System.out.println("�ܾ��� ���ڶ��ϴ�. �������!!");
	}
	else 
		balance-=userMoney;		
	System.out.println(userMoney+ " ���� ��ݵǾ����ϴ�.");	
	return  balance;
	}

	//���� �ܾ��� �������� �޼ҵ�
	int getBalance(){
		return balance;
	}
	
	//���� �ܾ��� ����ϴ� �޼ҵ�
	void PrintBalance(){
		System.out.println("���� �ܾ�:" + balance);
		
	}
	
	//���� �ܾ׿� ���Ͽ� �� 7.5% �� ���ڸ�  ����Ͽ� �߰��ϴ� �޼ҵ�
	int addInterest(int balance){
		int interest;
		//���� ���
		interest= (int)(balance * 0.075);
		//�ܾ׿� ���� ���ϱ�
		balance+=interest;
		return interest;
	}
	
	
	
}
