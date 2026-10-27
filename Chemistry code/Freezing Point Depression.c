#include <stdio.h>

int main() {
    printf("=== Freezing Point Depression Lab Simulation ===\n");

    while (1) {
        double k_f, normal_fp, molality;
        int i_factor;

        // User Inputs
        printf("\n--------------------------------------------------\n");
        printf("Enter cryoscopic constant of solvent (K kg/mol) [Default: 1.86]: ");
        scanf("%lf", &k_f);

        printf("Enter van't Hoff factor (i) [Default: 1]: ");
        scanf("%d", &i_factor);

        printf("Enter normal freezing point of solvent (°C) [Default: 0]: ");
        scanf("%lf", &normal_fp);

        printf("Enter molality of solution (mol/kg) [Default: 0.5]: ");
        scanf("%lf", &molality);

        // Calculations
        double delta_tf = i_factor * k_f * molality;
        double solution_fp = normal_fp - delta_tf;

        // Output Results 
        printf("\n--- Results ---\n");
        printf("Molality: %.4f mol/kg\n", molality);
        printf("Freezing Point Depression (Delta Tf): %.4f °C\n", delta_tf);
        printf("New Freezing Point of Solution: %.4f °C\n", solution_fp);

        // CSV Export for Plotting
        FILE *file = fopen("experiment1_freezing_point_1.csv", "w");
        if (file != NULL) {
            fprintf(file, "Molality (mol/kg),Freezing_Point (C)\n");
            for (double m = 0.1; m <= 2.0; m += 0.1) {
                double dt = i_factor * k_f * m;
                double s_fp = normal_fp - dt;
                fprintf(file, "%.4f,%.4f\n", m, s_fp);
            }
            fclose(file);
            printf("\n[Plotting Data] Saved to 'experiment1_freezing_point_1.csv' (Open in Excel/Sheets to plot).\n");
        }
        else {
            printf("\n[Error] Could not open file for writing.\n");
        }

        // Re-run option without restarting
        char choice;
        printf("\nDo you want to run another calculation? (y/n): ");

        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N') {
            printf("Exiting lab simulation.\n");
            break;
        }
    }

    return 0;
}
