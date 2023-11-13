#include <stdio.h>

int main() {
    char factoryName[] = "Product V.1";
    printf("factoryName ================ : %s\n", factoryName);
    printf("factoryName[address] ======= : %p\n", &factoryName);

    int *truckName = (int *)&factoryName;
    printf("truckName ================== : %s\n", truckName);
    printf("truckName[address] ========= : %p\n", &truckName);

    return 0;
}