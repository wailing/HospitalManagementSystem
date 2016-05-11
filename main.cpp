#include <iostream>
#include "Hospital.h"
using namespace std;

int main() {
    Hospital* hospital = new Hospital();
    hospital->registerPatient("anais","anais","anais","22 allee de la choco", "anais@anais.fr", 20,"student");
    hospital->displayHospital();
    return 0;
}