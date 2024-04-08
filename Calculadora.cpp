#include <iostream>
#include <windows.h>
#include <cstdio>
#include <unistd.h>
#include <locale.h>

void traducao_portugues(){
    SetConsoleOutputCP(CP_UTF8);

}

void Menu(){
    std::cout << "----/ Menu / ---- \n";
    std::cout << "Selecione sua operação: \n";
    std::cout << "1) Adição \n";
    std::cout << "2) Subtração \n";
    std::cout << "3) Multiplicação \n";
    std::cout << "4) Divisão \n";
    std::cout << "5) Sair \n";
    std::cout << "----/ Menu / ---- \n";
}

void Loading(){
    system("CLS");
    std::cout << "Processando pra sair.";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair..";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair...";
    sleep(1);
    system("CLS");
     std::cout << "Processando pra sair.";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair..";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair...";
    sleep(1);
    system("CLS");
     std::cout << "Processando pra sair.";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair..";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair...";
    sleep(1);
    system("CLS");
     std::cout << "Processando pra sair.";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair..";
    sleep(1);
    system("CLS");
    std::cout << "Processando pra sair...";
}

int main(){
   traducao_portugues();
   
   int selecionar;
   float num1, num2, resultado;
   selecionar = 0;

   while(selecionar<5)
   {
   Menu();
   scanf("%d", &selecionar);

   if(selecionar==5){
       Loading();
   }else{
    system("CLS");
      std::cout << "Digite um número: \n";
      scanf("%f", &num1);
      std::cout << "Digite outro número: \n";
      scanf("%f", &num2);
   };
   
    switch(selecionar)
    {
    case 1:
    if(selecionar==1){
            resultado = num1 + num2;
    }
   
    case 2:
    if(selecionar==2){
        resultado = num1 - num2;
    }

    case 3:
    if(selecionar==3){
        resultado = num1 * num2;
    }
    
    case 4:
    if(selecionar==4){
        resultado = num1 / num2;
    }
    if(num1==0){
        std::cout << "Operação Inválida[404]";
    }else{
        std::cout << "Resultado é: \n" << resultado;
    }
        break;  
    }
    sleep(5);
    system("CLS");
   }

    return 0;
}