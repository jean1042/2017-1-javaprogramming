public class Test1 {
public static void main(String args[]){
	
	//human Ŭ������ ��ü ����
	Human h1=new Human("����", 18);
	Human h2=new Human("����", 21);
	Human h3=new Human("���",50);
	System.out.println(h1.toString());
	System.out.println(h2.toString());
	System.out.println(h3.toString());

	//��� Ŭ������ ��ü ����
	Student s1=new Student("����", 21, "��ǻ�Ͱ���");
	Student s2=new Student("����", 22, "���Ʊ���");
	Student s3=new Student("����", 24, "�ִϸ��̼�");
	
	System.out.println(s1.toString());
	System.out.println(s2.toString());
	System.out.println(s3.toString());

}
}
