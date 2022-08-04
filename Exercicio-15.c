
//15. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
//suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
//chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
//calcular a altura do prédio.

//Tangente Ã© uma funÃ§Ã£o trigonomÃ©trica calculada a partir da divisÃ£o entre os catetos oposto 
//e adjacente de um triÃ¢ngulo retÃ¢ngulo. TriÃ¢ngulo retÃ¢ngulo nada mais Ã© do que uma figura geomÃ©trica 
//com trÃªs Ã¢ngulos internos e composto de catetos (menores lados) e hipotenusa (maior lado), conforme 
//ilustraÃ§Ã£o ao lado.

//CO/CA == CATATE OPOSTO / CATETO ADJACENTE

#include <stdio.h>

int main()
{
    float catA, catO, tang, sombra, hip, altura; 
    
    //tang = 30Â°;
    //tangentede 30Â° Ã© ~= 0.58;
    tang = 0.58;
    
    //olhando p/ hipotenusa
    catA = 60;
    
    //catO = altura (x)
    
    //tang = altura / catA;
    
    //0.58/1 = x/60
    
    altura = tang * catA;
    
    printf("Altura do prÃ©dio: %0.2f ", altura);
    
    return 0;
}
