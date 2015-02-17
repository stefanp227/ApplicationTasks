#include<stdio.h>
#include<math.h>

double fill_tetrahedron(int i){
	return (pow(i, 3.0) / (sqrt(2.0) * 6));
}

int main() {
	int i;
	double m;
	
	printf("Input edge of tetrahedron : \n");
	scanf("%d", &i);

	m = fill_tetrahedron(i) / 1000;

	printf("You can fill Regular tetrahedron with edge of %d cm with %.2f liters of water.\n", i, m);

	return 0;
}