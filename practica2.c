#include <stdio.h>

int main() 
{
int act;
//caso 1
int num, num_bits, i, num_bits_encendidos = 0;
//caso 2
int cali;
//case 3
int cap,ninv,alm,salir,hacer,ver;
///
printf("ELIJA LA ACT DE LA 1 A LA 3\n");
scanf("%d",&act);
switch (act)
{
    case 1:
        printf("Ingresa un numero entero: \n");
        scanf("%d", &num);
        printf("Ingresa el numero de bits a considerar: \n");
        scanf("%d", &num_bits);

        if (num_bits <= 0) 
        {
        printf("El numero de bits debe ser mayor que cero.\n");
        return 0;
        }

        for (i = 0; i < num_bits; i++) 
        {
            int bit = (num >> i) & 1;
            num_bits_encendidos += bit;
        }

        printf("Numero: %d\n", num);

        printf("Representacion binaria: ");
        for (i = num_bits - 1; i >= 0; i--) 
        {
        printf("%d", (num >> i) & 1);
        }
        printf("\nNumero de bits encendidos: %d\n", num_bits_encendidos);
        return 0;
break;
case 2:
    printf("ingrese una calificacion numerica entre 0 y 100\n");
    scanf("%d",&cali);
    if (cali<60)
        {
        printf("la calificacion numerica= %d\n",cali);
        printf("la calificacion en letra= F\n");
        return 0;
        }
    if (cali>=60 && cali<70)
    {
        printf("la calificacion numerica= %d\n",cali);
        printf("la calificacion en letra= D\n");
        return 0;
    }
    if (cali>=70 && cali<80)
    {
        printf("la calificacion numerica= %d\n",cali);
        printf("la calificacion en letra= C\n");
        return 0;
    }
    if (cali>=80 && cali<90)
    {
        printf("la calificacion numerica= %d\n",cali);
        printf("la calificacion en letra= B\n");
        return 0;
    }
    if (cali>=90 && cali<100)
        {
        printf("la calificacion numerica= %d\n",cali);
        printf("la calificacion en letra= A\n");
        return 0;
     }
    printf("ERROR INGRESE UNA CALIFICACION MENOR A 100");
    return 0;
break;
case 3:
        printf("Ingrese la capacidad del inventario:\n ");
        scanf("%d",&cap);
        int inv[cap];
        int al[cap];
        for(i=1;i<=cap;i++)
        {
        al[i]=0;
        }
            while (salir!=1)
            {
            printf("Que quieres hacer con ese inventario\nAgregar algo=1\nEliminar algo=2\nVer inventario=3\nSalir=4");
            scanf("%d",&hacer);
                if(hacer==10)
                {
                printf("elija el numero de inventario\n");
                scanf("%d",&ninv);
                printf("que quieres añadir a ese inventario\n");
                scanf("%d",&alm);
                al[ninv]=alm;
                }
            
                if(hacer==11)
                {
                printf("elija el numero de inventario\n");
                scanf("%d",&ninv);
                al[ninv]=0;
                }

                if(hacer==12)
                { 
                for(i=1;i<=cap;i++)
                {
                inv[i]=i;
                printf("Inventario %d=%d\n",inv[i],al[i]);
                }
                }

                if(hacer==4)
                {
                salir=1;
                }
            }
}
    

