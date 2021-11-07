#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void media_temperatura(void);
void jogo_senha(void);
void media_salarial(void);
void conta_telefonica(void);
void imposto(void);
void identifi_triangulo(void);
void empresa_vendas(void);
void cresc_populacional(void);
void tabela_teatro(void);
void numero_primo(void);

int main(void){
	char finalizar = 'n';
	char voltar = 'n';
	int comando;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		puts("|*******************************************|");
		puts("|  By: Matsu <><><><><><><><><><><><><><><>  |");
		puts("|*******************************************|");
		puts("|              MENU PRINCIPAL               |");
		puts("|*******************************************|");
		puts("| 1 - C�lculo de m�dia anual de temperatura |");
		puts("| 2 - Jogo da senha                         |");
		puts("| 3 - M�dia salarial                        |");
		puts("| 4 - C�lculo de conta telef�nica           |");
		puts("| 5 - Imposto a pagar                       |");
		puts("| 6 - Identifica��o de triangulos           |");
		puts("| 7 - Empresa de vendas                     |");
		puts("| 8 - Crescimento populacional              |");
		puts("| 9 - Tabela de valores de lucro de teatro  |");
		puts("| 10 - Verificar n�mero primo               |");
		puts("| 11 - Sair do sistema                      |");
		puts("|*******************************************|");
		printf("Para onde voc� deseja ir? ");
		scanf("%i", &comando);
		
		switch(comando){
			case 1:
				do{
					media_temperatura();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 2:
				do{
					jogo_senha();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 3:
				do{
					media_salarial();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 4:
				do{
					conta_telefonica();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 5:
				do{
					imposto();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 6:
				do{
					identifi_triangulo();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 7:
				do{
					empresa_vendas();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 8:
				do{
					cresc_populacional();
					system("cls");
 					puts("Deseja rever o crescimento populacional? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');	
			break;
				
			case 9:
				do{
					tabela_teatro();
					system("cls");
 					puts("Deseja rever a tabela? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');	
			break;
				
			case 10:
				do{
					numero_primo();
					system("cls");
 					puts("Deseja sair do precedimento? S/N");
					fflush(stdin);
					scanf("%c", &voltar);
				}while(voltar == 'n' || voltar == 'N');
			break;
				
			case 11:
				puts("Deseja sair do sistema? S/N");
				fflush(stdin);
				scanf("%c", &finalizar);
			break;
				
			default:
				puts("Op��o invalida!");
				system("pause");
		}
		
	}while(finalizar == 'n' || finalizar == 'N');
	
	return 0;
}

void media_temperatura(void){
	float temps[12], maior_t, soma_temp, media_temp;
    int i;
    char *maior_t_mes;
    char *meses[12] = 
	
	{"Janeiro", "Fevereiro", "Marco", "Abril",
    "Maio", "Junho", "Julho", "Agosto",
	"Setembro", "Outubro", "Novembro", "Dezembro"};
	
	setlocale(LC_ALL, "Portuguese");
    
    
    system("cls");
		puts("================== TEMPERATURAS ================== \n");
	    
	    for(i = 0; i < 12; i++){
	        printf("Insira a temperatura media para o mes %s: ", meses[i]);
	        scanf("%f", &temps[i]);
	        soma_temp = temps[i] + soma_temp;
	    }
	     
	    puts("=== MESES COM TEMPERATURA ANUAL ACIMA DA MEDIA === \n");
	    
		media_temp = soma_temp / 12;
	    maior_t_mes = meses[0];
	    
	    printf("Media anual: %.1f�c \n", media_temp);
	    
	    for(i = 0; i < 12; i++){
	        if(temps[i] > media_temp){    
	            maior_t_mes = meses[i];
	            printf("%.1f�c - %s\n", temps[i], maior_t_mes);
	        }
	    }
	    system("pause");
	    
	   
	  
}

void jogo_senha(void){
	int p1, p2, i;
	
	setlocale(LC_ALL, "Portuguese");
	

	system("cls");
	puts("|************** Jogo da senha **************|");
	printf("Jogador n1 - Digite uma senha entre 0 a 100: ");
	scanf("%i", &p1);
			
	for(i = 1; i <= 6 && p1 != p2; i++){
			
		if(i == 6){
			puts("Lamento... Acabaram as chances");
			printf("Numero do Jogardor n1: %i", p1);
			system("pause");
				
		}
			
		system("cls");
		puts("|************** Jogo da senha **************|");
		printf("Tentativa numero %i \n", i);
		printf("Jogador n2 - Tente acertar a senha(0 a 100): ");
		scanf("%i", &p2);
			
		if(i != 5 && p1 < p2){
			puts("Seha incorreta... Est� alto");
			system("pause");
		}else if(i != 5 && p1 > p2){
			puts("Senha incorreta... Est� baixo");
			system("pause");
		}else if(p1 == p2){
			puts("Parabens... Voc� acertou a senha!!!");
			system("pause");
		}
	}
}
 
void media_salarial(void){
	int sexo;
	int total_funcF= 0, total_funcM = 0, total_func = 0;
	float salF, salM, total_salF, total_salM;
	float media_salF, media_salM;
	char x = 's';

	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		puts("|******************************** M�dia salarial *******************************|");
		puts("|*******************************************************************************| \n");
		printf("Digite '1' para funcionario feminino ou digite '2' para funcionario masculino: ");
		scanf("%i", &sexo);
		
		if(sexo == 1){			
			printf("Digite o salario da funcionaria: ");
			fflush(stdin);
			scanf("%f", &salF);
			total_funcF++;
 			total_salF = total_salF + salF;
		}else if(sexo == 2){
			printf("Digite o salario do funcionario: ");
			fflush(stdin);
			scanf("%f", &salM);
			total_funcM++;
			total_salM = total_salM + salM;
		}else{
			puts("Op��o invalida!");
			system("pause");
		}
		
		system("cls");
 		puts("Deseja adicionar mais algum funcinario? S/N");
		fflush(stdin);
		scanf("%c", &x);
		
	}while(x == 's' || x == 'S');
	
	total_func = total_funcF + total_funcM;
	media_salF = total_salF / total_funcF;
	media_salM = total_salM / total_funcM;
	
	system("cls");
	puts("|************* M�dia salarial **************|");
	puts("|*******************************************| \n");
	
	printf("Total de funcion�rios analisados: %i \n", total_func);
	printf("Quantidade de funcionarios mulheres: %i \n", total_funcF);
	printf("Quantidade de funcionarios homens: %i \n", total_funcM);
	
	if(media_salF > media_salM){
		puts("Sexo feminino com maior media salarial!");
		printf("R$ %.2f \n", media_salF);
		system("pause");
	}else if(media_salM > media_salF){
		puts("Sexo mascolino com maior media salarial!");
		printf("R$ %.2f \n", media_salM);
		system("pause");
	}else if(media_salM == media_salF){
		puts("Anbos os sexos tem a mesma media salarial!");
		printf("R$ %.2f \n", media_salM);
		system("pause");
	}
}

void conta_telefonica(void){
	int telefone, internet, min_inter;
	float valor_inter, valor_total;
	
	setlocale(LC_ALL, "Portuguese");
		
		system("cls");
		puts("|***********************************|");
		puts("|    C�lculo de conta telef�nica    |");
		puts("|***********************************|");
		puts("|       LIGA��ES INTERURBANAS:      |");
		puts("| 1- Residencial: R$2.00 por minuto |");
		puts("| 2-  Comercial:  R$4.00 por minuto |");
		puts("|***********************************|");
		puts("|           BANDA LARGA:            |");
		puts("| 1-      15 Mega por R$50.00       |");
		puts("| 2-      50 Mega por R$100.00      |");
		puts("|***********************************|");
		printf("Digite tipo de Telefone (1 ou 2): ");
		scanf("%i", &telefone);
		
		switch(telefone){
			case 1:
				puts("Digite a quantidade de minutos em liga��es interurbanas: ");
				scanf("%i", &min_inter);
				valor_inter = min_inter * 2;
				puts("Agora digite sua banda larga (1 ou 2): ");
				scanf("%i", &internet);
				
				switch(internet){
					case 1:
						puts("|***********************************|");
						valor_total = 50 + valor_inter;
						printf("Valor total de liga��es interurbanas: R$ %.2f \n", valor_inter);
						printf("Valor total da conta: R$ %.2f \n", valor_total);
						system("pause");
					break;

					case 2:
						puts("|***********************************|");
						valor_total = 100 + valor_inter;
						printf("Valor total de liga��es interurbanas: R$ %.2f \n", valor_inter);
						printf("Valor total da conta: R$ %.2f \n", valor_total);
						system("pause");
					break;
					
					default:
						puts("Op��o invalida!");
						system("pause");
				}
			break;
				
			case 2:
				puts("Digite a quantidade de minutos em liga��es interurbanas: ");
				scanf("%i", &min_inter);
				valor_inter = min_inter * 4;
				puts("Agora digite sua banda larga(1 ou 2): ");
				scanf("%i", &internet);
				
				switch(internet){
					case 1:
						puts("|***********************************|");
						valor_total = 50 + valor_inter;
						printf("Valor total de liga��es interurbanas: R$ %.2f \n", valor_inter);
						printf("Valor total da conta: R$ %.2f \n", valor_total);
						system("pause");
					break;

					case 2:
						puts("|***********************************|");
						valor_total = 100 + valor_inter;
						printf("Valor total de liga��es interurbanas: R$ %.2f \n", valor_inter);
						printf("Valor total da conta: R$ %.2f \n", valor_total);
						system("pause");
					break;
					
					default:	
						puts("Op��o invalida!");
						system("pause");
				}
			break;
			
			default:
				puts("Op��o invalida!");
				system("pause");	
		}
}

void imposto(void){
	float valorImposto, totalPago, registro, valorMulta, valorum, valordois, vtres, vquatro, vcinco;
	int meses, i;
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	puts("|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|");
	puts("|=-=-=-=-=-=-=-= PREFEITURA -=-=-=-=-=-=-=-=-|");
	puts("|-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
	
	printf("Por favor, digite o seu numero de registro: ");
	scanf("%f", &registro);
	
	printf("Informe o valor do imposto a ser pago: ");
	scanf("%f", &valorImposto);
	
	printf("Agora informe o total de meses em atraso: ");
	scanf("%i", &meses);


	puts("=-=-=-=-=-= INFORMACOES RECEBIDAS =-=-=-=-=-=-\n\n");
	printf("Seu numero do registro: %.2f\n", registro);
	printf("Seu imposto: %.2f\n", valorImposto);
	puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
		
	valorum == 500;
		
	if(valorImposto <= valorum){
		valorMulta == meses / 0.01;
		totalPago += valorMulta;
		totalPago == valorMulta + valorImposto;
		puts("\n=-=-=-=-=-=-= RESULTADOS =-=-=-=-=-=-=\n\n");
		printf("Valor da multa: %.2f\n", valorMulta);
		printf("Total a ser pago: %.2f\n", totalPago);
	}	

		valordois == 1800;
	if(valorImposto <= valordois){
		valorImposto = 500.1;
		valorMulta = meses / 0.02;
		totalPago = valorMulta + valorImposto;
		puts("\n=-=-=-=-=-=-= RESULTADOS =-=-=-=-=-=-=\n\n");
		printf("Valor da multa: %.2f\n", valorMulta);
		printf("Total a ser pago: %.2f\n", totalPago);
	}
			
		vtres == 5000;
	if(valorImposto <= vtres){
		valorImposto = 1800.01;
		valorMulta = meses / 0.04;
		totalPago = valorMulta + valorImposto;
		puts("\n=-=-=-=-=-=-= RESULTADOS =-=-=-=-=-=-=\n\n");
		printf("Valor da multa: %.2f\n", valorMulta);
		printf("Total a ser pago: %.2f\n", totalPago);
	}
		
	vquatro == 12000;
	if(valorImposto <= vquatro){
		valorImposto = 5000.1;
		valorMulta = meses / 0.07;
		totalPago = valorMulta + valorImposto;
		puts("\n=-=-=-=-=-=-= RESULTADOS =-=-=-=-=-=-=\n\n");
		printf("Valor da multa: %.2f\n", valorMulta);
		printf("Total a ser pago: %.2f\n", totalPago);
	}
		
	if(valorMulta = meses / 0.1){
		valorImposto > 12000;
		totalPago = valorMulta + valorImposto;
		puts("\n=-=-=-=-=-=-= RESULTADOS =-=-=-=-=-=-=\n\n");
		printf("Valor da multa: %.2f\n", valorMulta);
		printf("Total a ser pago: %.2f\n", totalPago);
	}

}

void identifi_triangulo(void){
	float lado[2];
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	puts("|******* Identifica��o de triangulos *******|");
	printf("Lado 1 do triangulo: ");
	scanf("%f", &lado[0]);
	printf("Lado 2 do triangulo: ");
	scanf("%f", &lado[1]);
	printf("Lado 3 do triangulo: ");
	scanf("%f", &lado[2]);
	
	if(lado[0] + lado[1] > lado[2] && lado[0] + lado[2] > lado[1] && lado[1] + lado[2] > lado[0]){
		puts("Os tres lados formam um triangulo!");
		puts("\n");
		system("pause");
		
		if(lado[0] == lado[1] && lado[0] == lado[2]){
		system("cls");
		puts("|******* Identifica��o de triangulos *******|");
		puts("|*******************************************|");
		puts("|* Tri�ngulo Equil�tero: tr�s lados iguais *|");
		puts("\n");
		system("pause");
		}else if(lado[0] == lado[1] || lado[0] == lado[2] || lado[1] == lado[2]){
		system("cls");
		puts("|******* Identifica��o de triangulos *******|");
		puts("|*******************************************|");
		puts("|* Tri�ngulo Is�sceles: dois lados iguais  *|");
		puts("\n");
		system("pause");
		}else if(lado[0] != lado[1] || lado[0] != lado[2] || lado[1] != lado[2]){
		system("cls");
		puts("|******* Identifica��o de triangulos *******|");
		puts("|*******************************************|");
		puts("| Tri�ngulo Escaleno: tr�s lados diferentes |");
		puts("\n");	
		system("pause");
		}
		
	}else{
		puts("Os tr�s lados N�O formam um triangulo!");
	}
}

void empresa_vendas(void){
	int i;
	float totalA, totalB, totalC;
	float despesas, totalDespA, totalDespB, totalDespC;
	float vendas, totalVendasA, totalVendasB, totalVendasC;
	float mediaVendasC, difVendDespA, totalDesp;
	char cod;
	
	setlocale(LC_ALL, "Portuguese");

	for(i = 1; i <= 15; i++){
		
		system("cls");
		puts("|************ Empresa de vendas ************|");
		puts("|*******************************************|");
		puts("|              Tempo             |  C�digo  |");
		puts("|*******************************************|");
		puts("|         Mais de 10 anos        |    A     |");
		puts("|        Entre 5 e 10 anos       |    B     |");
		puts("|         Menos de 5 anos        |    C     |");
		puts("|*******************************************|");
	
		printf("Vendedor n� %i: \n", i);
		printf("Tempo de servi�o(c�digo): ");
		fflush(stdin);
		scanf("%c", &cod);
		
		
		if(cod == 'a' ||cod == 'A'){
			printf("Valor de suas vendas: ");
			scanf("%f", &vendas);
			printf("valor de despesas com viagem: ");
			scanf("%f", &despesas);
			
			totalA++;
			totalDespA = totalDespA + despesas;
			totalVendasA = totalVendasA + vendas;
			
		}else if(cod =='b' || cod == 'B'){
			printf("Valor de suas vendas: ");
			scanf("%f", &vendas);
			printf("valor de despesas com viagem: ");
			scanf("%f", &despesas);
			
			totalB++;
			totalDespB = totalDespB + despesas;
			totalVendasB = totalVendasB + vendas;
			
		}else if(cod == 'c' || cod == 'C'){
			printf("Valor de suas vendas: ");
			scanf("%f", &vendas);
			printf("valor de despesas com viagem: ");
			scanf("%f", &despesas);
			
			totalC++;
			totalDespC = totalDespC + despesas;
			totalVendasC = totalVendasC + vendas;
		}
	}
	
	if(totalDespA > totalDespB && totalDespA > totalDespC){
		printf("Faixa de tempo de servi�o que apresenta maior despesa com viagem: 'A' \n");
	}else if(totalDespB > totalDespA && totalDespB > totalDespC){
		printf("Faixa de tempo de servi�o que apresenta maior despesa com viagem: 'B' \n");
	}else{
		printf("Faixa de tempo de servi�o que apresenta maior despesa com viagem: 'C' \n");
	}
	
	mediaVendasC = totalVendasC / totalC;
	printf("A m�dia de vendas dos vendedores que possuem menos de 5 anos de servi�o: R$ %.2f \n", mediaVendasC);
	
	difVendDespA = totalVendasA - totalDespA;
	printf("A diferen�a entre o valor das vendas e despeas com viagem dos vendedores que tem mais de 10 anos de servi�o: R$ %.2f \n", difVendDespA);
	
	totalDesp = totalDespA + totalDespB + totalDespC;
	printf("O total de despesas com viagem pagos pela empresa: R$ %.2f", totalDesp);
	
	system("pause");

}

void cresc_populacional(void){
	int ano;
	float a = 90000, b = 300000;
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	puts("|******** Crescimento populacional *********| \n");
	
	puts("Cidade 'A'... Popula��o: 90.000     Taxade crescimento populacional por ano: 3%");
	puts("Cidade 'B'... Popula��o: 300.000    Taxade crescimento populacional por ano: 1,2% \n");
				
	while(a < b){
		a = a + (a * 0.03);
		b = b + (b * 0.012);
		ano++;
	}
	
	printf("A cidade 'A' ir� igualar ou utrapassar cidade 'B' em %i anos. \n", ano);
	printf("\n");
	system("pause");
}

void tabela_teatro(void){
	int valor = 15, quantidade = 600, despesa = 15000, lucro;
	int valor_max = valor, quant_max = quantidade, lucro_max;
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	puts("|Tabela de valores de lucro de teatro|");
	puts("|************************************|");
	puts("| Quantidade  |  T_Valor  |  T_Lucro |");
	puts("|************************************|");
	
	lucro_max = (valor_max * quant_max) - despesa;
	
	for(valor = 60; valor >= 10; valor = valor - 5){
		lucro = (valor * quantidade) - despesa;
		printf("  %i            %i           %i  \n", quantidade, valor, lucro);
		
		if(lucro > lucro_max){
			lucro_max = lucro;
			valor_max = valor;
			quant_max = quantidade;
		}
		quantidade = quantidade + 50;
	}
	
	puts("|************************************|");
	
	puts("|A melhor configura��o � a seguinte: | \n");
	printf(" Venda de ingressos a %i reais. \n", valor_max);
	printf(" Ir�o %i pessoas. \n", quant_max);
	printf(" Obtendo lucro m�ximo de %i reais. \n", lucro_max);
	printf("\n");
	system("pause");
}

void numero_primo(void){
	int num, i, verific = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	puts("|********* Verificar n�mero primo **********|");
	printf("Digite o n�mero que deseja verificar: ");
	scanf("%i", &num);
	
	for(i = 2; i <= num /2; i++){
		if(num %i == 0){
			verific++;
		}
	}
	
	if(verific == 0){
		printf("\n");
		printf("%i � um n�mero primo. \n", num);
		printf("\n");
		system("pause");
	}else{
		printf("\n");
		printf("%i n�o � um n�mero primo. \n", num);
		printf("\n");
		system("pause");
	}	
}
