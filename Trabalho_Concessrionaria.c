#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
#include <windows.h>

/* o codigo utiliza a linguagem operacional da maquina */

int main()
{
    char nome [80];
    int marca, modelo_fiat, conclu, forma_pagamento, modelo_volks, modelo_chevrolet, modelo_corolla,cep,numero_casa, i;
    float carro, financiamento, parcelas;
    setlocale(LC_ALL,"");
    do{
    printf("\n________________________________________________________________________________________________________________________\n");
    printf("\t\t\t\tBEM VINDO A CONSECIONÁRIA HUTHURI!!");
    printf("\n________________________________________________________________________________________________________________________\n\n\n");
    printf("\nMENU PARA COMPRA DE CARRROS\n\n");
    printf("1 - FIAT\n2 - VOLKSWAGEN\n3 - CHEVROLET\n4 - TOYOTA\n\n");
    printf("DIGITE O NÚMERO DA MARCA DESEJADA: ");
    scanf("%i", &marca);
    printf("DIGITE O NOME COMPLETO DO CLIENTE: ");
    setbuf(stdin, NULL);
    scanf("%[^\n]s", nome);
    printf("INFORME O CEP DA SUA CASA: ");
    scanf("%i",&cep);
    printf("INFORME O NUMERO DA SUA CASA: ");
    scanf("%i",&numero_casa);


    switch(marca)
    {
    case 1:
        printf("\n\nCARROS DISPONÍVEIS DA MARCA:\n");
        printf("1 - FIAT TORO\n2 - FIAT STRADA\n3 - FIAT GRAND SIENA\n4 - FIAT PALIO\n\n");
        printf("DIGITE O NÚMERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_fiat);

        switch(modelo_fiat)
        {
        case 1:
            printf("\n\nDETALHES DA FIAT TORO: \n");
            printf("\nMOTOR 1.8 E.TOR FLEX\nPOTÊNCIA 139 CAVALOS\nCÂMBIO AUTOMÁTICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nINTERIOR DE COURO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 8,3 km/l\nMODELO 2019\nPREÇO R$120.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");


            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);


                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$120.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM FIAT TORO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=120000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM FIAT TORO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
               break;
               case 2:
               break;
               default: printf("OPÇÃO INVÁLIDA!\n");
            }
            break;
        case 2:
            printf("\nDETALHES DA FIAT STRADA: \n");
            printf("MOTOR 1.8 FLEX\nPOTÊNCIA 74 CAVALOS\nCÂMBIO MANUAL DE 5 VELOCIDADES\n2 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 10,8 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$43.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$43.000,00");
                            printf("\nPARABÉNS %s VOÇE ADQUIRIU UMA FIAT STRADA 2019", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=43000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UMA FIAT STRADA 2019!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DA FIAT GRAND SIENA: \n");
            printf("MOTOR 1.0 EVO.FLEX\nPOTÊNCIA 75 CAVALOS\nCÂMBIO MANUAL DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,2 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$40.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$40.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM FIAT GRAN SIENA!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=40000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM FIAT GRAN SIENA!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DA FIAT PALIO: \n");
            printf("MOTOR 1.6 ETORQ FELX\nPOTÊNCIA 117 CAVALOS\nCÂMBIO AUTOMATICO DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 12,7 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$57.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$57.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM FIAT PALIO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=57000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM FIAT PALIO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);

                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        }
    }



// CARRO VOLKS



    switch(marca==2)
    {
    case 1:
        printf("\n\nCARROS DISPONÍVEIS DA MARCA:\n");
        printf("1 - VOLKSWAGEN GOLF\n2 - VOLKSWAGEN POLO\n3 - VOLKSWAGEN JETTA\n4 - VOLKSWAGEN T-CROSS\n\n");
        printf("DIGITE O NÚMERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_volks);

        switch(modelo_volks)
        {
        case 1:
            printf("\nDETALHES DO VOLKSWAGEN GOLF: \n");
            printf("MOTOR 2.0 TSI FLEX\nPOTÊNCIA 350 CAVALOS\nCÂMBIO AUTOMÁTICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$151.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$151.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW GOLF!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=151000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW GOLF!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");
            }
            break;
        case 2:
            printf("\nDETALHES DO VOLKSWAGEN POLO: \n");
            printf("MOTOR 1.0 FLEX\nPOTÊNCIA 117 CAVALOS\nCÂMBIO MANUAL DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 8,8 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$70.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$70.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW POLO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=70000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW POLO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DO VOLKSWAGEN JETTA: \n");
            printf("MOTOR 2.0 TS1\nPOTÊNCIA 230 CAVALOS\nCÂMBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 19,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$150.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$150.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW JETTA!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=150000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW JETTA!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DO VOLKSWAGEN T-CROSS: \n");
            printf("MOTOR 1.4 TSI HIGLINE\nPOTÊNCIA 128 CAVALOS\nCÂMBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 12,0 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$100.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$100.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW T-CROSS!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=100000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM VW T-CROSS!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        }
    }


// CARRO CHEVROLET


    switch(marca==3)
    {
    case 1:
        printf("\n\nCARROS DISPONÍVEIS DA MARCA:\n");
        printf("1 - CHEVROLET CRUZE\n2 - CHEVROLET ONIX\n3 - CHEVROLET TRACKER\n4 - CHEVROLET CAMARO\n\n");
        printf("DIGITE O NÚMERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_chevrolet);

        switch(modelo_chevrolet)
        {
        case 1:
            printf("\nDETALHES DO CHEVROLET CRUZE: \n");
            printf("MOTOR 1.4 TURBO FLEX\nPOTÊNCIA 153 CAVALOS\nCÂMBIO AUTOMÁTICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,2 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$110.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$110.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET CRUZE!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=110000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET CRUZE!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");
            }
            break;
        case 2:
            printf("\nDETALHES DO CHEVROLET ONIX: \n");
            printf("MOTOR 1.0 TURBO FLEX\nPOTÊNCIA 106 CAVALOS\nCÂMBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 12,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$66.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$66.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET ONIX!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=66000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET ONIX!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DO CHEVROLET TRACKER: \n");
            printf("MOTOR 1.4 TURBO\nPOTÊNCIA 150 CAVALOS\nCÂMBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 7,3 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$109.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$109.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET TRACKER!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=109000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET TRACKER!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DO CHEVROLET CAMARO: \n");
            printf("MOTOR 6.2 V8 \nPOTÊNCIA 461 CAVALOS\nCÂMBIO AUTOMATICO E MANUAL DE 10 VELOCIDADES\n2 PORTAS CONVERSIVEL\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 5,6 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$370.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$370.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET CAMARO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=370000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM CHVROLET CAMARO!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        }
    }

//CARRO TOYOTA


switch(marca==4)
    {
    case 1:
        printf("\n\nCARROS DISPONÍVEIS DA MARCA:\n");
        printf("1 - TOYOTA COROLLA\n2 - TOYOTA YARIS\n3 - TOYOTA SW4\n4 - TOYOTA ETIOS\n\n");
        printf("DIGITE O NÚMERO DO MODELO DESEJADO: ");
        scanf("%i", &modelo_corolla);

        switch(modelo_corolla)
        {
        case 1:
            printf("\nDETALHES DO TOYOTA COROLLA: \n");
            printf("MOTOR 2.0 TURBO FLEX\nPOTÊNCIA 230 CAVALOS\nCÂMBIO AUTOMÁTICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 11,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$145.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$145.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA COROLLA!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=145000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA COROLLA!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");
            }
            break;
        case 2:
            printf("\nDETALHES DO TOYOTA YARIS: \n");
            printf("MOTOR 1.0 TURBO FLEX\nPOTÊNCIA 112 CAVALOS\nCÂMBIO AUTOMATICO DE 5 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 8,3 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$88.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$88.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA YARIS!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=88000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA YARIS!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 3:
            printf("\nDETALHES DA TOYOTA SW4: \n");
            printf("MOTOR 3.0 TURBO\nPOTÊNCIA 380 CAVALOS\nCÂMBIO AUTOMATICO DE 6 VELOCIDADES\n4 PORTAS\nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 4,9 km/l\nMODELO 2019\nINTERIOR DE COURO\nPREÇO R$220.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$220.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA SW4!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=220000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA SW4!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        case 4:
            printf("\nDETALHES DO TOYOTA ETIOS: \n");
            printf("MOTOR 1.0 TURBO\nPOTÊNCIA 180 CAVALOS\nCÂMBIO MANUAL DE 5 VELOCIDADES\n4 PORTAS \nAR CONDICIONADO\nSISTEMA MULTIMEDIA COMPLETO\nCONSUMO MEDIO: 10,6 km/l\nMODELO 2019\nINTERIOR DE TECIDO\nPREÇO R$57.000,00\n\n");
            printf("\n");
            printf("DESEJA CONFIRMA A COMPRA DO CARRO?\nDIGITE 1 PARA SIM\nDIGITE 2 PARA ENCERRAR\n");
            printf("INFORME A OPÇÃO: ");
            scanf("%i", &conclu);
            printf("\n\n");

            switch(conclu)
            {
            case 1:
                printf("COMPRA CONFIRMADA, ESCOLHA A FORMA DE PAGAMENTO\n");
                printf("DIGITE 1 PARA PAGAR A VISTA\n");
                printf("DIGITE 2 PARA PAGAR A PRAZO\n\n");
                printf("INFORME A OPÇÃO: ");
                scanf("%i", &forma_pagamento);
                    switch(forma_pagamento)
                    {
                        case 1:
                            printf("VALOR UMA PARCELA DE R$57.000,00");
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA ETIOS!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        case 2:
                            printf("INFORME A QUANTIDADE DE PARCELAS QUE DESEJA PAGAR: ");
                            scanf("%f", &parcelas);
                            financiamento=57000.00/parcelas;
                            printf("\nVALOR A PAGAR SÃO %.2f PARCELAS DE R$%.2f.\n\n", parcelas, financiamento);
                            printf("\nPARABÉNS %s VOCÊ ACABOU DE ADQUIRIR UM TOYOTA ETIOS!!", nome);
                            printf("\nSEU CARRO SERÁ ENTREGUE NO CEP %i, NA CASA NUMERO %i",cep,numero_casa);
                        break;
                        default: printf("OPÇÃO INVÁLIDA!\n");
                    }
                break;
            case 2:
            break;
            default: printf("OPÇÃO INVÁLIDA!");

            }
        break;
        }
    }
    printf("\n\n\n__________________________________________________________________________________\n");
    printf("\nDESEJA FAZER OUTRA COMPRA?");
    printf("\nDIGITE:\t 1:SIM\t 2:NÃO\nDIGITE: ");
    scanf("%i", &i);

    }while(i==1);
    printf("\n");

    printf("\n\n\n__________________________________________________________________________________\n");
    printf("\t\tTRABALHO DE PROGRAMAÇÃO DE COMPUTADORES\n\nTEMA = CONCESSIONÁRIA DE CARROS\nALUNOS = YURI FERREIRA, HUMBERTO CUNHA, ARTHUR RIBEIRO\nPROFESSORA = TATIANA AZEVEDO");
    printf("\n__________________________________________________________________________________\n\n\n");
    getch();
    return 0;
}
