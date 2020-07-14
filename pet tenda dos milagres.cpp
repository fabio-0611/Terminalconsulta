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
        
		printf ("\n\n OLÁ SEJA BEM VINDO AO PET TENDA DOS MILAGRES!!!\n\n");
		printf (" ESTAMOS ENTRE OS MELHORES PET CENTER DO BRASIL!!!\n\n");

    	printf("Digite o seu Nome?\n\n");
    	gets (nome);
    		
	printf ("\n\n\t Olá cliente: %s",nome);


    	printf ("\n\n Escolha a opção de serviço pelo número:\n\n");
    	printf ("\t SERVIÇOS E VALORES DIFERENCIADOS DE ACORDO COM TAMANHO DO SEU ANIMAL\n\n" );
		printf ("\t(1)...Banho & Tosa\n");
		printf ("\t(2)...Adestramento\n");
		printf ("\t(3)...Castração\n");
		printf ("\t(4)...Consultas\n");
		printf ("\t(5)...Taxi Pet\n");
		
	    
    
    	scanf("%d", &i);

	}while ((i<1)|| (i>5));
	switch (i)
	{
	
        case 1:
        
 	       	printf ("\t \tVocê escolheu a opção de BANHO & TOSA.\n\n ");
            printf (" \t\t Animal de porte PEQUENO R$ 60,00.\n\n"); 
            printf (" \t\t Animal de porte MEDIO R$ 80,00.\n\n"); 
            printf (" \t\t Animal de porte GRANDE R$ 100,00.\n\n"); 
            
		
  	        break;
		
        	case 2:
				printf("\t Você escolheu o serviço de ADESTRAMENTO.\n\tO valor do ADESTRAMENTO é de R$ 80,00 por aula\n");
				break;
			
            	case 3:

                    printf("\nO valor da CASTRAÇÃO para CACHORRO, é de R$ 200,00\n\n");
                    printf("O valor da CASTRAÇÃO para GATO, é de R$ 150,00\n\n");
                    printf(" PARA CASTRAÇÃO SÓ TRABALHAMOS COM ESSES DOIS TIPOS DE ANIMAIS.\n\n");
                   
                    break;
					
				
					     case 4:
                           printf ("\t\n Você escolheu o serviço de CONSULTA.\n\tO valor da CONSULTA é de R$ 80,00.\n");
   			   	           printf("\n \t OBS; MEDICAÇÃO NÃO INCLUSO NAS CONSULTAS.\n\n");
                           break;
                                 
                                 case 5:
                				printf("\t Você escolheu o serviço de TAXI PET.\n\tLevamos e buscamos seu animal com total segurança e conforto.\n"); 
                              
                				break;
						                }
                        
                                                
                        	printf ("\n\n Escolha aforma de pagamento:\n\n");
               	printf ("\t(7)...Pagar com CARTÃO\n\n");
				printf ("\t(8)..Pagar com DINHEIRO\n\n");

                        
                          scanf("%d", &i);

	while ((i<7)|| (i>8));
	switch (i)
	{
                          
	                      case 7:
                           printf ("\t\t Você escolheu pagamento com CARTÃO.\n");
            			   break;

                                    case 8:
                    				printf("\t\t Voce escolheu pagamento com DINHEIRO.\n\n");
                    				break;}
                           
                           printf("\n\t Para sua melhor comodidade acesse nossa home page\n");
                           printf("\t WWW.PETTENDADOSMILAGRES.COM.BR\n");
               					printf("\t Lá você tem uma variedade de opções para seu animal de estimação. \n");
                			
 printf ("\t\t\n O PET TENDA DOS MILAGRES agradece pela sua preferência.\n\n\n");

	system("pause");
return 0;

}

