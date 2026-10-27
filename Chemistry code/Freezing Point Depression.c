#include <stdio.h>

int main() {
    printf("=== Freezing Point Depression Lab Simulation ===\n");

    while (true) {
        printf("\n--------------------------------------------------\n");
        double k_f, normal_fp, molality;
        int i_factor;

        // User Inputs
        printf("Enter cryoscopic constant of solvent (K kg/mol): Default: 1.86 ");
        if (scanf("%lf", &k_f) != 1) return 1;

        printf("Enter van't Hoff factor (i): Default: 1 ");
        if (scanf("%d", &i_factor) != 1) return 1;

        printf("Enter normal freezing point of solvent (°C): Default: 0 ");
        if (scanf("%lf", &normal_fp) != 1) return 1;

        printf("Enter molality of solution (mol/kg): Default: 0.5 ");
        if (scanf("%lf", &molality) != 1) return 1;

        // Calculations
        double delta_tf = i_factor * k_f * molality;
        double solution_fp = normal_fp - delta_tf;

        // Output Results (.4f matches setprecision(4))
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
        } else {
            printf("\n[Error] Could not open file for writing.\n");
        }

        // Re-run option without restarting
        char choice;
        printf("\nDo you want to run another calculation? (y/n): ");
        // Note the space before %c to consume any lingering newline character in the input buffer
        if (scanf(" %c", &choice) != 1) return 1;

        if (choice == 'n' || choice == 'N') {
            printf("Exiting lab simulation.\n");
            break;
        }
    }

    return 0;
}
