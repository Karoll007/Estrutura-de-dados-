#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x;
    double y;
} Vertice;

typedef struct {
    Vertice a;
    Vertice b;
    Vertice c;
} Triangulo;

double calcularAreaTriangulo(Triangulo t) {
    return 0.5 * fabs(t.a.x * (t.b.y - t.c.y) + t.b.x * (t.c.y - t.a.y) + t.c.x * (t.a.y - t.b.y));
}

 
double calcularAreaPoligono(Vertice* vertices, int numVertices) {
    if (numVertices < 3) {
        return 0.0; 
    }

    double areaTotal = 0.0;
		
	int i;
    for ( i = 1; i < numVertices - 1; i++) {
        Triangulo t;
        t.a = vertices[0];
        t.b = vertices[i];
        t.c = vertices[i + 1];
        areaTotal += calcularAreaTriangulo(t);
    }

    return areaTotal;
}

int main() {
    int numVertices;
    printf("Digite o numero de vertices do poligono: ");
    scanf("%d", &numVertices);

    if (numVertices < 3) {
        printf("Um poligono deve ter pelo menos 3 vertices.\n");
        return 1;
    }

    Vertice* vertices = (Vertice*)malloc(numVertices * sizeof(Vertice));
	int i;
    printf("Digite as coordenadas dos vertices (x y):\n");
    for ( i = 0; i < numVertices; i++) {
        scanf("%lf %lf", &vertices[i].x, &vertices[i].y);
    }

    double area = calcularAreaPoligono(vertices, numVertices);

    printf("A area do poligono eh: %.2lf\n", area);

    free(vertices);

    return 0;
}


