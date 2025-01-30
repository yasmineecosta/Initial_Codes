
void troca(int *p1, int *p2){
	int num1, num2;
	int aux;
	
	num1 = *p1;
	num2 = *p2;
	
	aux = num1;
	num1 = num2;
	num2 =aux;
	
	*p1 = num1;
	*p2 = num2;
	
}