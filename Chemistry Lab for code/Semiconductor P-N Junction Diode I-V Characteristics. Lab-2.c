#include <stdio.h>
#include <math.h>

int main(){
    // Vt = K*T/q
    // ID = IS*(exp(VD/(n*Vt))-1)

    double Vt,T,ID,IS,VD,n;
    char ch;

    const double K = 1.380649e-23;
    const double q = 1.60217663e-19;

    while(1){
        // Display Input Prompt
        printf("\n=====Semiconductor PN Junction I-V Characteristic Lab-2=====\n");

        printf("Enter operating Temperature (K): ");
        scanf("%lf",&T);

        printf("Enter Reverse Saturation Current,Is (A): ");
        scanf("%lf",&IS);

        printf("Enter Ideality Factor,n: ");
        scanf("%lf",&n);

        printf("Enter maximum voltage,Vd (V): ");
        scanf("%lf",&VD);

        //Calculation formulas
        Vt = (K*T)/q;
        ID = IS*(exp(VD/(n*Vt))-1.0);

        // Display Output Results
        printf("\n=====Calculation Results=====\n");

        printf("Thermal Voltage: %0.4lf V\n",Vt);
        printf("Diode Current: %0.10e A\n",ID);

        //File Saved & Graph Data
        FILE *file = fopen("Lab-2.csv","w");
        if(file!=NULL){
            fprintf(file,"Voltage(V),Current(A)\n");
            for(double Vd=0; Vd<=VD; Vd+=0.02){
                double Id = IS*(exp(Vd/(n*Vt))-1.0);

                fprintf(file,"%0.4lf,%0.10e\n",Vd,Id);
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
