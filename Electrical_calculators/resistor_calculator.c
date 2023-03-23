#include <stdio.h>

int main() {

  double watts;
  double volts;
  double amperes;
  double ohms;

  int resistor_num = 0;
  double resistor_value;
  double resistor_array[50];
  double resistor_series;
  double resistor_parallel;
  double resistor_parallel_total;

  char menuA;
  char menuB;

  do {

  printf("\n***  Resistor Calculator  ***\n");
  printf("=============================\n");
  printf("1. Resistor Power Consumption\n");
  printf("2. Resistor in Parallel\n");
  printf("3. Resistor in Series\n");
  printf("Q. To Quit\n");
  printf("--> ");
  scanf(" %c", &menuA);

  switch (menuA) {
    case '1':
      printf("\n   ** Provide 2 Values **     \n");
      printf("** Returns power consumption **\n");
      printf("===============================\n");
      printf("1. Input Voltage and Current\n");
      printf("2. Input Current and Resistance\n");
      printf("3. Input Resistance and Voltage\n");
      printf("--> ");
      scanf(" %c", &menuB);
      if (menuB == '1') {
        printf("Enter voltage in volts: ");
        scanf("%lf", &volts);
        printf("Enter current in amperes: ");
        scanf("%lf", &amperes);
        watts = volts * amperes;
        printf(">> Power Consumption in Watts: %.2lf, Voltage: %.2lf volts, Current: %.2lf amperes\n", watts, volts, amperes);
        break;
      }
      else if (menuB == '2') {
        printf("Enter current in amperes: ");
        scanf("%lf", &amperes);
        printf("Enter resistance in ohms: ");
        scanf("%lf", &ohms);
        watts = (amperes * amperes) * ohms;
        printf(">> Power Consumption in Watts: %.2lf, Current: %.2lf amperes, Resistance: %.2lf ohms\n", watts, amperes, ohms);
        break;
      }
      else if (menuB == '3') {
        printf("Enter resistance in ohms: ");
        scanf("%lf", &ohms);
        printf("Enter voltage in volts: ");
        scanf("%lf", &volts);
        watts = (volts * volts) / ohms;
        printf(">> Power Consumption in Watts: %.2lf, Voltage: %.2lf volts, Resistance: %.2lf ohms\n", watts, volts, ohms);
        break;
      }
      else {
        printf("\n** Not a valid selection, please try again.\n");
        break;
      }
    
    case '2':
      printf("Enter the number of resisters to use in parallel: ");
      scanf("%d", &resistor_num);
      for (int i = 0; i < resistor_num; i++) {
        printf("Enter resistor value in ohms: ");
        scanf("%lf", &resistor_value);
        resistor_array[i] = 1 / resistor_value;
      }      
      for (int j = 0; j < resistor_num; j++) {
        resistor_parallel_total = resistor_array[j] + resistor_parallel_total;
        resistor_parallel = 1 / resistor_parallel_total;
        //printf("Total %lf\n", resistor_parallel_total);
        //printf("Array %lf\n", resistor_array[j]);
      }
      printf(">> Total resistance value is %.2lf ohms\n", resistor_parallel);
      break;

    case '3':
      printf("Enter the number of resisters to use in series: ");
      scanf("%d", &resistor_num);
      for (int i = 0; i < resistor_num; i++) {
        printf("Enter resistor value in ohoms: ");
        scanf("%lf", &resistor_value);
        resistor_array[i] = resistor_value;
      }
      for (int j = 0; j < resistor_num; j++) {
        resistor_series = resistor_array[j] + resistor_series;
        //printf("Array %d\n", resistor_array[j]);
      }
      printf(">> Total resistance value is %.2lf ohms\n", resistor_series);
      break;
    
    default:
      if (menuA == 'Q') {
        break;
      }
      else {
        printf("\nNot a valid selection, please try again.\n");
        break;
      }
  }

  } while (menuA != 'Q');

  printf("\n** Goodbye! **\n");

  return 0;
}