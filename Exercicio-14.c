#include <stdio.h>

int main()
{

// Os semáforos estão separados por uma distância de 500 m
// Segundo os dados estatísticos da companhia controladora de trânsito, um veículo, que está inicialmente parado no semáforo O, tipicamente parte com aceleração constante de 1 m s^-2 até atingir a velocidade de 72 km h^-1 e, a partir daí, prossegue com velocidade constante.

int velocidadeMS, velocidadeKM;

int velocidade, velocidadeInicial,velocidadeFinal ,time, aceleracao;

int tempoAteOFatouAbrir, andouNaAceleracao, espaco, espacoInicial, timeConstante;


// convertendo a velocidade para m/s

velocidadeKM = 72;

velocidadeMS = velocidadeKM / 3.6;
printf("Velocidade em metros por segundos: %d m/s ", velocidadeMS);
printf("");

// tempo ate atingir a velocidade constante

velocidadeInicial = 0;
aceleracao = 1;
time = 0;

velocidade = (velocidadeInicial + aceleracao);
time = (velocidadeMS / velocidade);
printf("Tempo ate atingir a velocidade constante: ");
scanf("%d", &time);
printf("");

// Vamos saber o quanto o carrinho andou nessa aceleração.

velocidadeFinal = time;

andouNaAceleracao = (velocidadeInicial * velocidadeInicial) + (2 * aceleracao);
velocidadeFinal = (velocidadeFinal * velocidadeFinal);


espaco = (velocidadeFinal / andouNaAceleracao);


// A cor verde deve acender quando o carrinho estiver a 100m antes do semáforo (A) que está a uma distância de 500m do semáforo anterior (O). Logo, ele deve acender quando o carrinho percorrer 400m. Tiremos o tempo desse percurso então:
// S = So + v . t

timeConstante = (velocidadeFinal - espaco) / velocidadeMS;


// tempoAteOFatouAbrir := timeConstante + time
printf("O tempo para que o farou fique aberto ate a chegada do carro e: %d segundos", timeConstante);

    return 0;
}
