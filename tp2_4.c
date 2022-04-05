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

<<<<<<< HEAD
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
=======
void cargar(struct compu pc[T], char tipos[6][10]);
void pcMasRapida(struct compu pc[T]);
void pcMasVieja(struct compu pc[T]);
void imprimir(struct compu pc[T]);

int main(){
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD","Celeron","Athlon","Core","Pentium"};
    struct compu pc[T];

    cargar(pc,tipos);
    imprimir(pc);
>>>>>>> Opcion2
    return 0;
}
//numero = rand () % (N-M+1) + M;   // Este está entre M y N
//N mayor que M
<<<<<<< HEAD
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
=======
void cargar(struct compu pc[T], char tipos[6][10]){
        int i;
        srand(time(NULL));
        for(i=0;i<T;i++){
            pc[i].velocidad = rand () % (3 - 1 + 1) + 1;
            pc[i].anio = rand () % (2017 - 2000 + 1) + 2000;
            pc[i].cantidad = rand () % (4 - 1 + 1) + 1;
            pc[i].tipo_cpu= &tipos[rand()%6][0];
        }
}

void imprimir(struct compu pc[T]){
    int i;
    for(i=0;i<T;i++){
        printf("////////////////// Compu %d//////////////////\n", i+1);
        printf("Velocidad: %d GHz\n",pc[i].velocidad);
        printf("Anio: %d\n",pc[i].anio);
        printf("Cantidad: %d\n",pc[i].cantidad);
        printf("Tipo_CPU: %s\n",pc[i].tipo_cpu);
        printf("\n\n");
    }
        pcMasRapida(pc);
        pcMasVieja(pc);
}

void pcMasRapida(struct compu pc[T]){
    int i, aux=pc[0].velocidad;
    char *p;
    p= pc[0].tipo_cpu;
    for(i=0;i<T;i++){
        if(pc[i].velocidad > aux){
            aux=pc[i].velocidad;
            p= pc[i].tipo_cpu;
        }
    }
    printf("PC mas rapida: %s\t%d GHz\n", p, aux);
}

void pcMasVieja(struct compu pc[T]){
    int i, aux=pc[0].anio;
    char *p;
    p= pc[0].tipo_cpu;
    for(i=0;i<T;i++){
        if(pc[i].anio < aux){
            aux=pc[i].anio;
            p= pc[i].tipo_cpu;
        }
    }
    printf("PC mas vieja: %s\tAño %d\n", p, aux);
>>>>>>> Opcion2
}