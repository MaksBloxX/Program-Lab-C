#include <stdio.h>

int main(){
    //Tf = Kc*M*I
    //S_fp = N_fp - Tf

    double Tf,Kc,M,S_fp,N_fp;
    int I,i;
    char ch;

    while(1){
        // Display Input Prompt
        printf("\n=====Freezing Point Depression Lab-1=====\n");

        printf("Enter Cryoscopic Constant (K): ");
        scanf("%lf",&Kc);

        printf("Enter Molality (mol/kg): ");
        scanf("%lf",&M);

        printf("Enter Van't Hoff Factor (i): ");
        scanf("%d",&I);

        printf("Enter Normal Freezing Point (C): ");
        scanf("%lf",&N_fp);

        //Calculation formulas
        Tf = Kc*M*I;
        S_fp = N_fp - Tf;

        // Display Output Results
        printf("\n====Calculation Results====\n");

        printf("Molality: %0.4lf mol/kg\n",M);
        printf("Freezing Point Depression: %0.4lf C\n",Tf);
        printf("New Freezing Point: %0.4lf C\n",S_fp);

        //File Saved & Graph Data
        FILE *file = fopen("Lab-1.csv","w");
        if(file!=NULL){
            fprintf(file,"Molality,Freezing Point\n");
            for(i=1; i<=20; i++){
                double m = i*0.1;
                double dt = Kc*m*I;
                double s_fp = N_fp - dt;

                fprintf(file,"%0.2lf,%0.4lf\n",m,s_fp);
            }
            fclose(file);
            printf("\nGraph data saved successfully.\n");
        }
        else{
            printf("\nError creating CSV file.\n");
        }

        //Re-run Options
        printf("\nDo you want another calculation? (y/n): ");
        scanf(" %c",&ch);
        if(ch=='n'||ch=='N'){
            printf("Exiting Lab Simulation.\n");
            break;
        }
    }
    return 0;
}
