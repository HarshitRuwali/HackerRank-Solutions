#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double vol(triangle tr){
    double a, b, c, p;
    a = (double) tr.a;
    b = (double) tr.b;
    c = (double) tr.c;
    p = (a+b+c)/2;

    return p*(p-a)*(p-b)*(p-c);
}

int cmp(const void *a, const *b){
    triangle *ia = (triangle*) a;
    triangle *ib = (triangle*) b;

    return (int)(vol(*ia) - vol(*ib));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    qsort((void *) tr, n, sizeof(triangle), cmp);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}