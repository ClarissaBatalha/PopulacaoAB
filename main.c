#include <stdio.h>

int main(void) {
  //Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200.000 habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
  float A=80000;
  float B=200000;
  int ano=0;

  while (A <= B){
    A = A + (A * 0.03);
    B = B + (B * 0.015);
    ano = ano + 1;
  }

printf("\nPaís A ultrapassa ou iguala país B em %d anos", ano);
}