#include<stdio.h>
#include<math.h>

double fill_tetrahedron(int edge){
	return (pow(edge, 3.0) / (sqrt(2.0) * 6));
}

int tetrahedron_filled(int tetrahedrons[], int water) {
	int k;
	int result = 0;
	double curr_water_needed, water_left;
	
	water_left = water;

	for(k = 0; k < 3; k++) {
		curr_water_needed = fill_tetrahedron(tetrahedrons[k]) / 1000;
		if(water_left > 0) {
			if (water_left > curr_water_needed) {
				water_left = water_left - curr_water_needed;
				result++;
			}
		};
	}

	return result;
}

int main() {
	int m, result, l;
	int a[3] = {100, 20, 30}; // опитах се да го направя с променлива масива(потребителя да въвежда броя на тетраедрите и после техните ръбове), но не успях и затова го направих със предварително въведени стойности

	printf("Input the numbef of litres of water : ");
	scanf("%d", &m);

	result = tetrahedron_filled(a, m);
	printf("%d\n", result);

	return 0;
}