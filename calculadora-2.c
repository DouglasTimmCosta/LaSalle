#include <math.h>
#include <stdio.h>
int main() {
  printf("Nome: Douglas Timm - Curso: ADS - Universidade: LaSalle - Matricula: "
         "202220263");
  int operacao, repete;
  float numero1, numero2, resultado;

  do {
    // fiz o uso do Do-While, para refazer a coleta de informação caso alguma
    // informação fornecida for invalida.
    repete = 0;
    // levei o valor da condição de repetição para o valor de 0 no inicio, para
    // podermos na sequencia obter a verificação se alguma informação fornecida
    // foi invalida.
    printf("\ndigite a operação que deseja realizar:\n");
    printf("1(adiçao), 2(subtraçao), 3(divisao), 4(multiplicaçao), "
           "5(potenciaçao) ou 6(radiciaçao):");
    scanf("%d", &operacao);
    if (operacao == 6) {
      printf("\ndigite um numero:\n");
      scanf("%f", &numero1);
    }
    // aqui fiz o uso do If Else para designar quais tipos de informações o
    // programa necessita do usuario, de acordo com a operação desejada pelo
    // mesmo.
    else if (operacao == 5) {
      printf("digite o valor da base:");
      scanf("%f", &numero1);
      printf("digite o valor do expoente:");
      scanf("%f", &numero2);
    } else {
      printf("digite o primeiro numero:");
      scanf("%f", &numero1);
      printf("digite o segundo numero:");
      scanf("%f", &numero2);
    }
    switch (operacao) {
    // fazendo uso do switch case o programa realiza o calculo com os números,
    // digitados pelo usuario, de acordo com a operação, por ele também
    // escolhida.
    case 1:
      resultado = numero1 + numero2;
      printf("o resultado é:%2.f", resultado);
      break;
    case 2:
      resultado = numero1 - numero2;
      printf("o resultado é:%2.f", resultado);
      break;
    case 3:
      if (numero2 == 0) {
        printf("divisor nao pode ser igual a 0");
        repete = 1;
        // caso o usuario digite 0 como valor do divisor, é atribuido o valor de
        // 1 a variavel da condição do while.
        break;
      } else {
        resultado = numero1 / numero2;
        printf("o resultado é:%2.f", resultado);
        break;
      }
    case 4:
      resultado = numero1 * numero2;
      printf("o resultado é:%2.f", resultado);
      break;
    case 5:
      resultado = pow(numero1, numero2);
      // para realizar a operação de potenciação fiz o uso da função .Pow(x,y).
      printf("o resultado é:%2.f", resultado);
      break;
    case 6:
      resultado = sqrt(numero1);
      // para realizar o calculo da raiz usei a função .Sqrt(x).
      printf("o resultado é:%2.f", resultado);
      break;
    default:
      printf("operaçao invalida, digite a operaçao novamente");
      repete = 1;
      // caso o usuario digite alguma operação invalida o valor da variavel
      // "repete" é alterado para 1, tornando assim a condição verdadeira do
      // while.
      break;
    }
  } while (repete == 1);
  // caso alguma informação não for valida a condição do while se torna
  // verdadeira, o programa entra no loop e assim a coleta de informação é feita
  // novamente.
  return 0;
}