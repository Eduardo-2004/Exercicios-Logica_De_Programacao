
//15. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o �
//suficientemente longa. Assumindo que seja poss�vel medir sua sombra e a do pr�dio no
//ch�o, e que voc� lembre da sua altura, fa�a um programa para ler os dados necess�rios e
//calcular a altura do pr�dio.

//Tangente é uma função trigonométrica calculada a partir da divisão entre os catetos oposto 
//e adjacente de um triângulo retângulo. Triângulo retângulo nada mais é do que uma figura geométrica 
//com três ângulos internos e composto de catetos (menores lados) e hipotenusa (maior lado), conforme 
//ilustração ao lado.

//CO/CA == CATATE OPOSTO / CATETO ADJACENTE

#include <stdio.h>

int main()
{
    float catA, catO, tang, sombra, hip, altura; 
    
    //tang = 30°;
    //tangentede 30° é ~= 0.58;
    tang = 0.58;
    
    //olhando p/ hipotenusa
    catA = 60;
    
    //catO = altura (x)
    
    //tang = altura / catA;
    
    //0.58/1 = x/60
    
    altura = tang * catA;
    
    printf("Altura do prédio: %0.2f ", altura);
    
    return 0;
}
