#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  char menuA;
  int menuB;
  double volts;
  double amps;
  double ohms;
  double watts;

  do {
  printf("\n    Ohms Law Calculator\n");
  printf("=============================\n");
  printf("Choose a number or Q to quit:\n");
  printf("1. Calculate Voltage:\n");
  printf("2. Calculate Current:\n");
  printf("3. Calculate Resistance:\n");
  printf("4. Calculate Power:\n");
  printf("Q. To Quit\n");
  printf("=============================\n");
  printf("--> ");
  scanf(" %c", &menuA);

  switch (menuA) {
    case '1':
      printf("Enter current in amperes: ");
      scanf("%lf", &amps);
      printf("Enter resistance in ohms: ");
      scanf("%lf", &ohms);
      volts = amps * ohms;
      watts = (amps * amps) * ohms;
      printf(">> Amperes: %.2lf * Ohms: %.2lf = Voltage: %.2lf = Watts: %.2lf\n", amps, ohms, volts, watts);
      break;
    case '2':
      printf("Enter voltage in volts: ");
      scanf("%lf", &volts);
      printf("Enter resistance in ohms: ");
      scanf("%lf", &ohms);
      amps = volts / ohms;
      watts = (volts * volts) / ohms;
      printf(">> Voltage: %.2lf / Ohms: %.2lf = Amperes: %.2lf = Watts: %.2lf\n", volts, ohms, amps, watts);
      break;
    case '3':
      printf("Enter current in amperes: ");
      scanf("%lf", &amps);
      printf("Enter voltage in volts: ");
      scanf("%lf", &volts);
      ohms = volts / amps;
      watts = volts * amps;
      printf(">> Voltage: %.2lf / Amperes: %.2lf = Ohms: %.2lf = Watts: %.2lf\n", volts, amps, ohms, watts);
      break;
    case '4':
      printf("Enter power in watts: ");
      scanf("%lf", &watts);
      printf("1. Select voltage:\n");
      printf("2. Select current:\n");
      printf("3. Select resistance:\n");
      printf("--> ");
      scanf("%d", &menuB);
      if (menuB == 1) {
        printf("Enter voltage in volts: ");
        scanf("%lf", &volts);
        ohms = (volts * volts) / watts;
        amps = watts / volts;
        printf(">> Watts: %.2lf with Voltage: %.2lf = Ohms: %.2lf = Amperes: %.2lf\n", watts, volts, ohms, amps);
        break;
      }
      else if (menuB == 2) {
        printf("Enter current in amperes: ");
        scanf("%lf", &amps);
        ohms = watts / (amps * amps);
        volts = watts / amps;
        printf(">> Watts: %.2lf with Amperes: %.2lf = Ohms: %.2lf = Voltage: %.2lf\n", watts, amps, ohms, volts);
        break;
      }
      else if (menuB == 3) {
        printf("Enter resistance in ohms: ");
        scanf("%lf", &ohms);
        amps = sqrt(watts / ohms);
        volts = sqrt(watts * ohms);
        printf(">> Watts: %.2lf with Ohms: %.2lf = Amperes: %.2lf = Voltage: %.2lf\n", watts, ohms, amps, volts);
        break;
      }
      else {
        printf("\n** Not a valid selection, please try again.\n");
        break;
      }
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