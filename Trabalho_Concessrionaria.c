#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
#include <windows.h>

int main()
{
    char nome [80];
    int marca, modelo_fiat, conclu, forma_pagamento, modelo_volks, modelo_chevrolet, modelo_corolla;
    float carro, financiamento, parcelas;
    setlocale(LC_ALL,"");
    printf("\n________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\tBEM VINDO A CONSECION�RIA HUTHURI!!");
    printf("\n________________________________________________________________________________________________________________________\n\n\n");
    printf("\nMENU PARA COMPRA DE CARRROS\n\n");
    printf("1 - FIAT\n2 - VOLKSWAGEN\n3 - CHEVROLET\n4 - TOYOTA\n\n");
    printf("DIGITE O N�MERO DA MARCA DESEJADA: ");
    scanf("%i", &marca);
    printf("DIGITE O NOME COMPLETO DO CLIENTE: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]s", nome);


    switch(marca)
    {
    case 1:
        printf("\n\nCARROS DISPON�VEIS DA MARCA:\n");
        printf("1 - FIAT TORO\n2 - FIAT STRADA\n3 - FIAT GRAND SIENA\n4 - FIAT PALIO\n\n");
        printf("DIGITE O N�MERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_fiat);

        switch(modelo_fiat)
        {
        case 1:
            printf("\n\nDETALHES DA FIAT TORO: \n");
            printf("\nMOTOR 1.8 E.TOR FLEX\nPOT�NCIA 139 CAVALOS\nC�MBIO AUTOM�TICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nINTERIOR DE COURO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 8,3 km/l\nMODELO 2019\nPRE�O R$120.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");


            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);


                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$120.000,00");
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UM FIAT TORO!!", nome);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=120000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UM FIAT TORO!!", nome);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
               break;
               case 2:
               break;
               default: printf("OP��O INV�LIDA!\n");
            }
            break;
        case 2:
            printf("\nDETALHES DA FIAT STRADA: \n");
            printf("MOTOR 1.8 FLEX\nPOT�NCIA 74 CAVALOS\nC�MBIO MANUAL DE 5 VELOCIDADES\n2 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 10,8 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$43.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$43.000,00");
                            printf("\nPARAB�NS %s VO�E ADQUIRIU UMA FIAT STRADA 2019", nome);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=43000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UMA FIAT STRADA 2019!!", nome);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DA FIAT GRAND SIENA: \n");
            printf("MOTOR 1.0 EVO.FLEX\nPOT�NCIA 75 CAVALOS\nC�MBIO MANUAL DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,2 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$40.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$40.000,00");
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UM FIAT GRAN SIENA!!", nome);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=40000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UM FIAT GRAN SIENA!!", nome);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DA FIAT PALIO: \n");
            printf("MOTOR 1.6 ETORQ FELX\nPOT�NCIA 117 CAVALOS\nC�MBIO AUTOMATICO DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 12,7 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$57.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$57.000,00");
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UM FIAT PALIO!!", nome);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=57000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARAB�NS %s VOC� ACABOU DE ADQUIRIR UM FIAT PALIO!!", nome);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        }
    }



// CARRO VOLKS



    switch(marca==2)
    {
    case 1:
        printf("\n\nCARROS DISPON�VEIS DA MARCA:\n");
        printf("1 - VOLKSWAGEN GOLF\n2 - VOLKSWAGEN POLO\n3 - VOLKSWAGEN JETTA\n4 - VOLKSWAGEN T-CROSS\n\n");
        printf("DIGITE O N�MERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_volks);

        switch(modelo_volks)
        {
        case 1:
            printf("\nDETALHES DO VOLKSWAGEN GOLF: \n");
            printf("MOTOR 2.0 TSI FLEX\nPOT�NCIA 350 CAVALOS\nC�MBIO AUTOM�TICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$151.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$151.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=151000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");
            }
        case 2:
            printf("\nDETALHES DO VOLKSWAGEN POLO: \n");
            printf("MOTOR 1.0 FLEX\nPOT�NCIA 117 CAVALOS\nC�MBIO MANUAL DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 8,8 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$70.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$70.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=70000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DO VOLKSWAGEN JETTA: \n");
            printf("MOTOR 2.0 TS1\nPOT�NCIA 230 CAVALOS\nC�MBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 19,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$150.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$150.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=150000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DO VOLKSWAGEN T-CROSS: \n");
            printf("MOTOR 1.4 TSI HIGLINE\nPOT�NCIA 128 CAVALOS\nC�MBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 12,0 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$100.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$100.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=100000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        }
    }


// CARRO CHEVROLET


    switch(marca==3)
    {
    case 1:
        printf("\n\nCARROS DISPON�VEIS DA MARCA:\n");
        printf("1 - CHEVROLET CRUZE\n2 - CHEVROLET ONIX\n3 - CHEVROLET TRACKER\n4 - CHEVROLET CAMARO\n\n");
        printf("DIGITE O N�MERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_chevrolet);

        switch(modelo_chevrolet)
        {
        case 1:
            printf("\nDETALHES DO CHEVROLET CRUZE: \n");
            printf("MOTOR 1.4 TURBO FLEX\nPOT�NCIA 153 CAVALOS\nC�MBIO AUTOM�TICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,2 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$110.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$110.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=110000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");
            }
        case 2:
            printf("\nDETALHES DO CHEVROLET ONIX: \n");
            printf("MOTOR 1.0 TURBO FLEX\nPOT�NCIA 106 CAVALOS\nC�MBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 12,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$66.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$66.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=66000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DO CHEVROLET TRACKER: \n");
            printf("MOTOR 1.4 TURBO\nPOT�NCIA 150 CAVALOS\nC�MBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 7,3 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$109.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$109.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=109000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DO CHEVROLET CAMARO: \n");
            printf("MOTOR 6.2 V8 \nPOT�NCIA 461 CAVALOS\nC�MBIO AUTOMATICO E MANUAL DE 10 VELOCIDADES\n2 PORTAS CONVERSIVEL\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 5,6 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$370.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$370.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=370000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        }
    }

//CARRO TOYOTA


switch(marca==4)
    {
    case 1:
        printf("\n\nCARROS DISPON�VEIS DA MARCA:\n");
        printf("1 - TOYOTA COROLLA\n2 - TOYOTA YARIS\n3 - TOYOTA SW4\n4 - TOYOTA ETIOS\n\n");
        printf("DIGITE O N�MERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_corolla);

        switch(modelo_corolla)
        {
        case 1:
            printf("\nDETALHES DO TOYOTA COROLLA: \n");
            printf("MOTOR 2.0 TURBO FLEX\nPOT�NCIA 230 CAVALOS\nC�MBIO AUTOM�TICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$145.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$145.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=145000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");
            }
        case 2:
            printf("\nDETALHES DO TOYOTA YARIS: \n");
            printf("MOTOR 1.0 TURBO FLEX\nPOT�NCIA 112 CAVALOS\nC�MBIO AUTOMATICO DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 8,3 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$88.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$88.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=88000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DA TOYOTA SW4: \n");
            printf("MOTOR 3.0 TURBO\nPOT�NCIA 380 CAVALOS\nC�MBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 4,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPRE�O R$220.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$220.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=220000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DO TOYOTA ETIOS: \n");
            printf("MOTOR 1.0 TURBO\nPOT�NCIA 180 CAVALOS\nC�MBIO MANUAL DE 5 VELOCIDADES\n4 PORTAS \nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 10,6 km/l\nMODELO 2019\nINTERIOR DE TECIDO\nPRE�O R$57.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OP��O: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OP��O: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$57.000,00");
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=57000.00/parcelas;
                            printf("VALOR A PAGAR S�O %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                        break;
                        default: printf("OP��O INV�LIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OP��O INV�LIDA!");

            }
        break;
        }
    }

    printf("\n");

    printf("\n\n\n__________________________________________________________________________________\n");
    printf("\t\tTRABALHO DE PROGRAMA��O DE COMPUTADORES\n\nTEMA = CONCESSION�RIA DE CARROS\nALUNOS = YURI FERREIRA, HUMBERTO CUNHA, ARTHUR RIBEIRO\nPROFESSORA = TATIANA AZEVEDO");
    printf("\n__________________________________________________________________________________\n\n\n");
    getch();
    return 0;
}
