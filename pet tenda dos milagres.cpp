#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	char i;
	char nome[10];
	
   
    system("color 4f");
    setlocale(LC_ALL,"Portuguese");

	{
        
		printf ("\n\n OL� SEJA BEM VINDO AO PET TENDA DOS MILAGRES!!!\n\n");
		printf (" ESTAMOS ENTRE OS MELHORES PET CENTER DO BRASIL!!!\n\n");

    	printf("Digite o seu Nome?\n\n");
    	gets (nome);
    		
	printf ("\n\n\t Ol� cliente: %s",nome);


    	printf ("\n\n Escolha a op��o de servi�o pelo n�mero:\n\n");
    	printf ("\t SERVI�OS E VALORES DIFERENCIADOS DE ACORDO COM TAMANHO DO SEU ANIMAL\n\n" );
		printf ("\t(1)...Banho & Tosa\n");
		printf ("\t(2)...Adestramento\n");
		printf ("\t(3)...Castra��o\n");
		printf ("\t(4)...Consultas\n");
		printf ("\t(5)...Taxi Pet\n");
		
	    
    
    	scanf("%d", &i);

	}while ((i<1)|| (i>5));
	switch (i)
	{
	
        case 1:
        
 	       	printf ("\t \tVoc� escolheu a op��o de BANHO & TOSA.\n\n ");
            printf (" \t\t Animal de porte PEQUENO R$ 60,00.\n\n"); 
            printf (" \t\t Animal de porte MEDIO R$ 80,00.\n\n"); 
            printf (" \t\t Animal de porte GRANDE R$ 100,00.\n\n"); 
            
		
  	        break;
		
        	case 2:
				printf("\t Voc� escolheu o servi�o de ADESTRAMENTO.\n\tO valor do ADESTRAMENTO � de R$ 80,00 por aula\n");
				break;
			
            	case 3:

                    printf("\nO valor da CASTRA��O para CACHORRO, � de R$ 200,00\n\n");
                    printf("O valor da CASTRA��O para GATO, � de R$ 150,00\n\n");
                    printf(" PARA CASTRA��O S� TRABALHAMOS COM ESSES DOIS TIPOS DE ANIMAIS.\n\n");
                   
                    break;
					
				
					     case 4:
                           printf ("\t\n Voc� escolheu o servi�o de CONSULTA.\n\tO valor da CONSULTA � de R$ 80,00.\n");
   			   	           printf("\n \t OBS; MEDICA��O N�O INCLUSO NAS CONSULTAS.\n\n");
                           break;
                                 
                                 case 5:
                				printf("\t Voc� escolheu o servi�o de TAXI PET.\n\tLevamos e buscamos seu animal com total seguran�a e conforto.\n"); 
                              
                				break;
						                }
                        
                                                
                        	printf ("\n\n Escolha aforma de pagamento:\n\n");
               	printf ("\t(7)...Pagar com CART�O\n\n");
				printf ("\t(8)..Pagar com DINHEIRO\n\n");

                        
                          scanf("%d", &i);

	while ((i<7)|| (i>8));
	switch (i)
	{
                          
	                      case 7:
                           printf ("\t\t Voc� escolheu pagamento com CART�O.\n");
            			   break;

                                    case 8:
                    				printf("\t\t Voce escolheu pagamento com DINHEIRO.\n\n");
                    				break;}
                           
                           printf("\n\t Para sua melhor comodidade acesse nossa home page\n");
                           printf("\t WWW.PETTENDADOSMILAGRES.COM.BR\n");
               					printf("\t L� voc� tem uma variedade de op��es para seu animal de estima��o. \n");
                			
 printf ("\t\t\n O PET TENDA DOS MILAGRES agradece pela sua prefer�ncia.\n\n\n");

	system("pause");
return 0;

}

