
import java.util.Scanner;
public class EmployeeTestReal {
	

		   public static void main(String args[]) {

		      // �迭 ���� ���� ����
		      Employee[] a = new Employee[2];
		      Scanner scan = new Scanner(System.in);

		      // ����ڷκ��� �����͸� �޾� �迭�� �߰��Ѵ�
		      for (int i = 0; i < a.length; i++) {
		         //�迭 Employee ��ü ����
		    	  a[i] = new Employee();
		         
		    	  //�迭�� �̸� �Է¹ޱ�
		    	  System.out.print("�̸��� �Է��ϼ��� [������ȣ" + (i + 1) + "] : ");
		         String name = scan.next();
		         a[i].setName(name);
		         
		         //�迭�� �ּ� �Է¹ޱ�
		         System.out.print("�ּҸ� �Է��ϼ��� [������ȣ" + (i + 1) + "] : ");
		         String address = scan.next();
		         a[i].setAddress(address);
		         
		         //�迭�� ���� �Է¹ޱ�
		         System.out.print("������ �Է��ϼ��� [������ȣ" + (i + 1) + "] : ");
		         int salary = scan.nextInt();
		         a[i].setSalary(salary);
		         
		         //�迭�� ��ȭ��ȣ �Է¹ޱ�
		         System.out.println("��ȭ��ȣ�� �Է��ϼ��� [������ȣ" + (i + 1) + "] : ");
		         String phoneNumber = scan.next();
		         a[i].setPhoneNumber(phoneNumber);
		       	 }
		      
		      //���� ���� �����
		      System.out.println("�����Ͻðڽ��ϱ�?");
		      Scanner input=new Scanner(System.in);
		      	char c;
		      	c=input.next().charAt(0);
		      	while (c=='y')
		      {
		     
		         //�����ϰ� ���� ���� �����ϱ�
		         System.out.println("�����ϰ� ���� ������ȣ�� �Է��ϼ��� : ");
		         int fixNumber=(scan.nextInt()-1);
		        
		        System.out.print("�̸��� �Է��ϼ��� : ");
		         String name2 = scan.next();
		         a[fixNumber].setName(name2);

		         System.out.print("�ּҸ� �Է��ϼ��� : ");
		         String address2 = scan.next();
		         a[fixNumber].setAddress(address2);

		         System.out.print("������ �Է��ϼ���  : ");
		         int salary2 = scan.nextInt();
		         a[fixNumber].setSalary(salary2);

		         System.out.println("��ȭ��ȣ�� �Է��ϼ��� : ");
		         String phoneNumber2 = scan.next();
		         a[fixNumber].setPhoneNumber(phoneNumber2);
		         
		      break;
		      
		      }
		      
		     
		    	  
		      // �迭�� ����� ��� �����͸� ����Ѵ�.
		      for (int i = 0; i < a.length; i++) {
		         System.out.println("������ȣ "+ (i+1)+ " name : " +a[i].getName()+" Address : "+a[i].getAddress()+" Annual_Salary : "+a[i].getSalary()+" phone : "+a[i].getPhoneNumber());
		         
		      }
		   }
		}



