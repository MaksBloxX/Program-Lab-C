#include <stdio.h>
#include <math.h>

int main(){
    //aA + bB = cC + dD
    //Kc = Qc = Cc*Dd / Aa*Bb

    double a,b,c,d,A,B,C,D,Qc,Kc;
    double de,nu;
    char ch;

    while(1){
        // Display Input Prompt
        printf("\n=====Chemical Equilibrium Lab-3=====\n");

        printf("Enter Coefficients (a,b,c,d): ");
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        printf("Enter Concentrations (A,B,C,D): ");
        scanf("%lf%lf%lf%lf",&A,&B,&C,&D);

        printf("Enter Equilibrium Constants (Kc): ");
        scanf("%lf",&Kc);

        // Calculation formulas
        de = pow(A,a)*pow(B,b);
        nu = pow(C,c)*pow(D,d);

        if(de==0){
            Qc=0;  //Qc become infinite if de=0, so we set Qc=0 to avoid division by zero
        }
        else{
            Qc = nu/de;
        }

        // Display Output Results
        printf("\n=====Calculation Results=====\n");

        printf("Equilibrium Constants (Kc): %0.4lf\n",Kc);
        printf("Reaction Quotient (Qc): %0.4lf\n",Qc);
        printf("\n");

        if(Qc==Kc){
            printf("System is at Equilibrium.\n");
        }
        else if(Qc<Kc){
            printf("Reaction shift FORWARD (Right).\n");
            printf("More products will be formed.\n");
        }
        else{
            printf("Reaction shift REVERSE (Left).\n");
            printf("More reactants will be formed.\n");
        }

        // File Saved & Graph Data
        FILE *file = fopen("Lab-3.csv","w");
        if(file!=NULL){
            fprintf(file,"Situation,Qc,Kc\n");
            fprintf(file,"Q<K,1.0,4.0\n");
            fprintf(file,"Q=K,2.0,2.0\n");
            fprintf(file,"Q>K,4.0,2.0\n");

            fclose(file);
            printf("\nGraph saved successfully.\n");
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
