class Human {
	String name;
	int age;

	// ������ �߰���Ű�� �ʱⰪ �Է°��� �ϱ�
	Human(String name, int age) {
		this.name = name;
		this.age = age;
	}

	// �� �ʵ忡 ���Ͽ� �����ڿ� ������ �����ϱ�
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String toString() {
		return "�̸� : " + name + " , " + "���� : " + age ; 
	}

}