#include <iostream>
//Top-Liner(T),  Middle-Liner(M),  Bottom-Liner(B),  Support(S)  y Jungle(J).  
// S se relaciona con T o B, y viceversa.
// J se relaciona con M, y viceversa.

struct help{
    char cat;
    help *connection =NULL;
};


help * createSequence(int length){

    help secuencia[length];
    
    std::cout<< "Creando secuencia" <<std::endl;
    for(int i=0; i<length; i++){
    std::cout<< "Ingrese categoria: "; std::cin>> secuencia[i].cat;
    }

    help*connection = &secuencia[0];
    
    return connection;
}


void connectSequences(help *h1, int l1, help *h2, int l2){
    for(int i=0; i<l1; i++){
        for(int n=0; n<l2; n++){
            if((h1[i].cat='S') && (h2[n].cat='T')){help*connection=h2;
            
            /*
            }else if((h1[i].cat='S') && (h2[n].cat='B')){help*connection[h1]=*h2[n];
            }else if((h1[i].cat='B') && (h2[n].cat='S')){help*connection[h1]=*h2[n];
            }else if((h1[i].cat='T') && (h2[n].cat='S')){help*connection[h1]=*h2[n];
            }else if((h1[i].cat='J') && (h2[n].cat='M')){help*connection[h1]=*h2[n];
            }else if((h1[i].cat='M') && (h2[n].cat='J')){help*connection[h1]=*h2[n];
            }*/
    }}}}        




int main()
{
   
    // Pruebe lo solicitado acá, modifique los ejemplos para verificar otros casos.
    // Crear Secuencias de Categorias
    int l1=4; // Largo Categorias base
    int l2=10; // Largo Recomendaciones disponibles
    help *h1 = createSequence(l1); // Categorias bases
    help *h2 = createSequence(l2); // Recomendaciones disponible
    connectSequences(h1, l1, h2, l2); // Conexión de recomendaciones
    //showHELP(h1, l1); // Mostrar recomendaciones

    return 0;
}
