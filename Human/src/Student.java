class Student extends Human{
	
//major �ʵ� ����
String major;

//�θ�Ŭ������ �����ڸ� ȣ��
public Student(String name, int age, String major){
	super(name, age);
	this.major=major;
}
//�����ڿ� �����ڸ� �ۼ��ϱ�
public String getMajor(){
	return major;
}

public void setMajor(){
	this.major=major;
}
//��ü�� ���� ���¸� ��Ÿ���� ���ڿ��� ��ȯ�ϴ� toString �ۼ��ϱ�
public String toString(){
	return "�̸� : " + name + " , " + "���� : " + age +  " , " + " ���� " + major; 
}

}
