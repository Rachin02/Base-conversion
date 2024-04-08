#include<stdio.h>
#include<math.h>
#include<string.h>
void conversionList();
char bin[65] ;

int calculate_size(){
	int pos = 0 ;
	for(int i = 0 ; i <= 65 ; i++){
		if(bin[i] == '\0'){
           return pos ;
		}
		pos++;
	}
	return pos ;
}
int any_to_decimal(int size){
	int ans = 0;
	int pos = 0 ;
	for(int i = size - 1 ; i >= 0 ; i--){
		if(bin[i] == '0'){
			pos++;
		}
		else if(bin[i] == '1'){
			ans += pow(2,pos);
			pos++;
		}
	}
	return ans ;
}
//=============================Binary to octal ========================//
void Bin_to_Oct(){	
	printf("\n\t --- Binary to Octal Conversion ---\t\n");
	printf("\nEnter the binary number : ");
	scanf("%s",&bin) ;

	int size = calculate_size();
	int ans = any_to_decimal(size) ;

	int index = 0;
	char octal[30] ;
	while(ans != 0){
		int rem = ans % 8 ;
		octal[index] = rem + '0' ;
		index++ ;
		ans /= 8 ;
	}
    printf("\n[  Binary to Octal : %sb = ",bin);
    for(int i = index-1 ; i >= 0 ; i--){
    	printf("%c",octal[i]) ;
    }
    printf("o  ]\n");
	conversionList() ;
}
//=============================Binary to decimal ========================//

void Bin_to_deci(){
	printf("\n\t --- Binary to Decimal Conversion ---\t\n");
	printf("\nEnter the binary number : ");
	scanf("%s",&bin) ;

	int size = calculate_size();
	int ans = any_to_decimal(size);
	
	printf("\n[  Binary to Decimal : %sb = %dd  ]\n",bin,ans);
	conversionList() ;
}
//======================= Binary to Hexadecimal =========================//

void Bin_to_hexa(){
	printf("\n\t --- Binary to Hexadecimal Conversion ---\t\n");
	printf("\nEnter the binary number : ");

   long int bin, hexa = 0, i = 1, rem;
   scanf("%ld", &bin);
   long int binary = bin ;

   while (bin != 0){
      rem = bin % 10;
      hexa = hexa + rem * i;
      i = i * 2;
      bin = bin / 10;
   }
	printf("\n[  Binary to Hexadecimal : %ldb = %lXx  ]\n",binary,hexa);

	conversionList() ;
}
//========================== Octal to Binary ==========================//
void Oct_to_bin(){
	printf("\n\t --- Octal to Binary Conversion ---\t\n");
	printf("\nEnter the Octal number : ");

	 int octal, binary = 0, decimal = 0, base = 1;
    int octalDigit, tempDecimal;
   
    scanf("%d", &octal);
    int octal_num = octal ;

    while (octal != 0) {
        octalDigit = octal % 10;
        decimal += octalDigit * base;
        octal /= 10;
        base *= 8;
    }
    base = 1;
    while (decimal != 0) {
        tempDecimal = decimal % 2;
        binary += tempDecimal * base;
        decimal /= 2;
        base *= 10;
    }

	printf("\n[  Octal to Binary : %do = %db  ]\n",octal_num,binary);

	conversionList() ;
}
//========================== Decimal to Binary ==========================//
void Deci_to_Bin(){
	printf("\n\t --- Decimal to Binary Conversion ---\t\n");
	printf("\nEnter the Decimal number : ");

	int deci_num ;
	scanf("%d",&deci_num) ;
   int decimal = deci_num ;
	int index = 0;
	char binary[30] ;
	while(deci_num != 0){
		int rem = deci_num % 2 ;
		binary[index] = rem + '0' ;
		index++ ;
		deci_num /= 2 ;
	}
    printf("\n[  Decimal to Binary : %dd = ",decimal);
    for(int i = index-1 ; i >= 0 ; i--){
    	printf("%c",binary[i]) ;
    }
    printf("o  ]\n");


	conversionList() ;
}
//======================== Hexadecimal to Binary ========================//
void Hexa_to_bin(){
	printf("\n\t --- Hexadecimal to Binary Conversion ---\t\n");
	printf("\nEnter the Hexadecimal number : ");


     char binarynum[60], hexa[60];
     long int i = 0;
     scanf("%s", hexa);
    printf("\n[  Hexadecimal to Binary : %sx = ",hexa);
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            Hexa_to_bin();
        }
        i++;
    }
       printf("b  ]\n");

	conversionList() ;
}
//======================== Octal to Decimal ==============================//
void Oct_to_Deci(){
	printf("\n\t --- Octal to Decimal Conversion ---\t\n");
	printf("\nEnter the Octal number : ");
	int octal, decimal = 0, base = 1;
   int octalDigit ;
   
    scanf("%d", &octal);
    int octal_num = octal ;

    while (octal != 0) {
        octalDigit = octal % 10;
        decimal += octalDigit * base;
        octal /= 10;
        base *= 8;
    }
   printf("\n[  Octal to Decimal : %do = %dd  ]\n",octal_num,decimal);

	conversionList() ;
}
//========================= Octal to Hexadecimal =========================//
void Oct_to_Hexa(){
	printf("\n\t --- Octal to Hexadecimal Conversion ---\t\n");

	 int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary, place;
    char hex[65] = "";
    int rem;
    place = 1;
    binary = 0;

    printf("\nEnter the Octal number : ");
    scanf("%lld", &octal);
    tempOctal = octal;

    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }
    
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }
       int len = strlen(hex) ;
       printf("\n[  Octal to Hexadecimal : %lldo = ",octal);
       for(int i = len-1 ; i >= 0 ; i--){
    	 printf("%c",hex[i]) ;
       }
       printf("x  ]\n");

	conversionList() ;
}
//========================== Decimal to Hexadecimal =======================//
void Deci_to_hexa(){
	printf("\n\t --- Decimal to Hexadecimal Conversion ---\t\n");
	printf("\nEnter the Decimal number : ");

	int deci_num ;
	scanf("%d",&deci_num) ;
	int decimal = deci_num ;

	char hexa[30] ;
	int index = 0;
	while(deci_num != 0){
       int rem = deci_num%16 ;
       if(rem == 10){
       	 hexa[index] = 'A' ;
       }
       else if(rem == 11){
         hexa[index] = 'B' ;
       }
       else if(rem == 12){
       	hexa[index] = 'C' ;
       }
       else if(rem == 13){
       	hexa[index] = 'D' ;
       }
       else if(rem == 14){
       	hexa[index] = 'E';
       }
       else if(rem == 15){
       	hexa[index] = 'F' ;
       }
       else{
         hexa[index] = rem + '0' ;       	
       }
       index++;
       deci_num /= 16 ;
	}

	  printf("\n[  Decimal to Hexadecimal : %dd = ",decimal);
    for(int i = index-1 ; i >= 0 ; i--){
    	printf("%c",hexa[i]) ;
    }
    printf("x  ]\n");

	conversionList() ;
}
// ========================== Decimal to Octal ============================//
void Deci_to_Oct(){
	printf("\n\t --- Decimal to Octal Conversion ---\t\n");
	printf("\nEnter the Decimal number : ");

	int deci_num ;
	scanf("%d",&deci_num) ;
	int decimal = deci_num ;

	char octal[30] ;
	int index = 0;
	while(deci_num != 0){
       int rem = deci_num%8 ;
       octal[index] = rem + '0' ;
       index++;
       deci_num /= 8 ;
	}

	  printf("\n[  Decimal to Octal : %dd = ",decimal);
    for(int i = index-1 ; i >= 0 ; i--){
    	printf("%c",octal[i]) ;
    }
    printf("o  ]\n");

	conversionList() ;
}
//=========================== Hexadecimal to Decimal =====================//
void Hexa_to_deci(){
	printf("\n\t --- Hexadecimal to Decimal Conversion ---\t\n");
	printf("\nEnter the Hexadecimal number : ");

	 char hex[17];
    int decimal = 0, base = 1, length, i, value;

    scanf("%16s", hex);
    length = strlen(hex);

    for(i = length - 1; i >= 0; i--) {
        if(hex[i] >= '0' && hex[i] <= '9') {
            value = hex[i] - '0';
        } else if(hex[i] >= 'A' && hex[i] <= 'F') {
            value = hex[i] - 'A' + 10;
        }
        decimal += value * base;
        base = base * 16;
    }

   printf("\n[  Octal to Decimal : %so = %dd  ]\n",hex,decimal);

	conversionList() ;
}
//============================== LIST ============================//
void conversionList(){
	int chooseConversion ;
	printf("\n Choose your option from here : [1/2/3/4/5/6/7/8/9/10/11/12]") ;
	printf("\n  [1]  --  Binary to Octal");
	printf("\n  [2]  --  Binary to Decimal");
	printf("\n  [3]  --  Binary to Hexadecimal");
	printf("\n  [4]  --  Octal to Binary");
	printf("\n  [5]  --  Decimal to Binary");
	printf("\n  [6]  --  Hexadecimal to Binary");
	printf("\n  [7]  --  Octal to Decimal");
	printf("\n  [8]  --  Octal to Hexadecimal");
	printf("\n  [9]  --  Decimal to Hexadecimal");
	printf("\n [10]  --  Decimal to Octal");
	printf("\n [11]  --  Hexadecimal to Decimal");
	printf("\n  [0]  --  Terminate the program");

	printf("\n\n Your choose is : ") ;
	scanf("%d",&chooseConversion) ;

	switch(chooseConversion){
	case 1:
		Bin_to_Oct();
		break;
	case 2:
		Bin_to_deci();
		break;
	case 3:
		Bin_to_hexa();
		break;
	case 4:
		Oct_to_bin();
		break;
	case 5:
		Deci_to_Bin();
		break;
	case 6:
		Hexa_to_bin();
		break;
	case 7:
		Oct_to_Deci();
		break;
	case 8:
		Oct_to_Hexa();
		break;
	case 9:
		Deci_to_hexa();
		break;
	case 10:
		Deci_to_Oct();
		break;
	case 11:
		Hexa_to_deci();
	case 0:
		printf("====================================================\n");
		printf("\t\tEnding the program\n") ;
		printf("\t\tThank you for using\n");
		printf("====================================================\n");
		break;
	default:
		printf("Enter a valid number : \n");
		conversionList();
	}
}

int main(){
	printf("\n\t\t========== Base Conversion ==========\t\n");
	conversionList() ;

	return 0;
}