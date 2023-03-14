#include <stdio.h>


int main() {

  char menu;
  double voltsIn;
  double voltsOut;
  double input_ohms;
  double output_ohms;

  do {

  printf("\n===============================================================================\n");
  printf("     ** Voltage Divider Calculator - Enter 3 values to obtain 4th value ** \n");
  printf("Input Voltage > Input Resistance > Output ^ Voltage > Output Resistance > Ground\n");
  printf("    1. Input Voltage = Input Resistance, Output Voltage, Output Resistance:\n");
  printf("    2. Input Resistance = Input Voltage, Output Voltage, Output Resistance:\n");
  printf("    3. Output Voltage = Input Voltage, Input Resistance, Output Resistance:\n");
  printf("    4. Output Resistance = Input Voltage, Input Resistance, Output Voltage:\n");
  printf("    Q. To Quit\n");
  printf("===============================================================================\n");
  printf("--> ");
  scanf(" %c", &menu);

  switch (menu) {
  case '1':
    printf("Enter Input Resistance in ohms: ");
    scanf("%lf", &input_ohms);
    printf("Enter Output Voltage in volts: ");
    scanf("%lf", &voltsOut);
    printf("Enter Output Resistance in ohms: ");
    scanf("%lf", &output_ohms);
    voltsIn = voltsOut * (input_ohms + output_ohms) / output_ohms;
    printf(">> Input Voltage: %.2lf = Input Resistance: %.2lf, Output Voltage: %.2lf, Output Resistance: %.2lf\n", voltsIn, input_ohms, voltsOut, output_ohms);
    break;
  case '2':
    printf("Enter Input Voltage in volts: ");
    scanf("%lf", &voltsIn);
    printf("Enter Output Voltage in volts: ");
    scanf("%lf", &voltsOut);
    printf("Enter Output Resistance in ohms: ");
    scanf("%lf", &output_ohms);
    input_ohms = output_ohms * (voltsIn - voltsOut) / voltsOut;
    printf(">> Input Resistance: %.2lf = Input Voltage: %.2lf, Output Voltage: %.2lf, Output Resistance: %.2lf\n", input_ohms, voltsIn, voltsOut, output_ohms);
    break;
  case '3':
    printf("Enter Input Voltage in volts: ");
    scanf("%lf", &voltsIn);
    printf("Enter Input Resistance in ohms: ");
    scanf("%lf", &input_ohms); 
    printf("Enter Output Resistance in ohms: ");
    scanf("%lf", &output_ohms);
    voltsOut = voltsIn * output_ohms / (input_ohms + output_ohms);
    printf(">> Output Voltage: %.2lf = Input Voltage: %.2lf, Input Resistance: %.2lf, Output Resistance: %.2lf\n", voltsOut, voltsIn, input_ohms, output_ohms);
    break;
  case '4':
    printf("Enter Input Voltage in volts: ");
    scanf("%lf", &voltsIn);
    printf("Enter Input Resistance in ohms: ");
    scanf("%lf", &input_ohms); 
    printf("Enter Output Voltage in volts: ");
    scanf("%lf", &voltsOut);
    output_ohms = input_ohms * voltsOut / (voltsIn - voltsOut);
    printf(">> Output Resistance: %.2lf = Input Voltage: %.2lf, Input Resistance: %.2lf, Output Voltage: %.2lf\n", output_ohms, voltsIn, input_ohms, voltsOut);
    break;
  default:
    if (menu == 'Q') {
      break;
    }
    else {
      printf("\nNot a valid selection, please try again.\n");
      break;
    }
  }
  } while (menu != 'Q');
  
  printf("\n** Goodbye! **\n");

  return 0;
}
