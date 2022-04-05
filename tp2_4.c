#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define T 5

struct compu {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

void cargar(struct compu *pc, char tipos[6][10]);
void imprimir(struct compu *pc);

int main(){
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD","Celeron","Athlon","Coree","Pentium"};
    struct compu pc;
    int i;
    for(i=0; i<T;i++){
        cargar(&pc,tipos);
        printf("////////////////// Compu %d//////////////////\n", i+1);
        imprimir(&pc);
    }
    return 0;
}
//numero = rand () % (N-M+1) + M;   // Este está entre M y N
//N mayor que M
void cargar(struct compu *pc, char tipos[6][10]){
        srand(time(NULL));
        pc->velocidad = rand () % (3 - 1 + 1) + 1;
        pc->anio = rand () % (2017 - 2000 + 1) + 2000;
        pc->cantidad = rand () % (4 - 1 + 1) + 1;
        pc->tipo_cpu= &tipos[rand()%6][0];
}

void imprimir(struct compu *pc){
        printf("Velocidad: %dGHz\n",pc->velocidad);
        printf("Anio: %d\n",pc->anio);
        printf("Cantidad: %d\n",pc->cantidad);
        printf("Tipo_CPU: %s\n",pc->tipo_cpu);
        printf("\n\n");
        fflush(stdin);
}