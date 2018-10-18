  #include "stdio.h"
int print_interger(int int_value,int* int_pointer);
int change_integers(int int_value,int* int_pointer);

  int  main(int argc, char const *argv[])
  {
    int int_value = 777;
    int* int_pointer = &int_value;//speichert die Adresse an dem der Wert von int_value steht
    print_interger(int_value,int_pointer);
    change_integers(int_value,int_pointer);
    print_interger(int_value,int_pointer);
    return 0;
  }
  int print_interger(int int_value,int* int_pointer)
  {
    printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer);
    return 0;
  }
  int change_integers(int int_value,int* int_pointer)
  {
    //int_value = 999;  //Da beim Aufrufen der Function eine Copy vom int_value gamacht wird,
    *int_pointer = 999; // muss die Adresse verwendet werden an dem der neue Wert gespeichert wird
  }
