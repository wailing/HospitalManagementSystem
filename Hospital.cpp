/**
 * Project Untitled
 */


#include "Hospital.h"

using namespace std;
/**
 * Hospital implementation
 */
Hospital::Hospital() {
}


void Hospital::registerAdmin() {

}

void Hospital::registerPatient(string username, string pwd, string name, string address, string email, int age, string function) {
    Patient* patient = new Patient(username, pwd, name, address, email, age, function);
    this->listPatient.push_back(patient);
    patient = nullptr;
    delete patient;
}

void Hospital::registerDoctor() {

}

void Hospital::displayHospital() {
    cout <<"************ Hospital ************ \n\n";
    if(this->listPatient.size() == 0) {
        cout << "No Patient in this Hospital\n\n";
        return;
    }
    for(int i = 0; i <= this->listPatient.size() - 1; i++) {
        cout << this->listPatient[i]->getName() << "\n\n";
    }
    cout <<"************ Hospital ************ \n\n";
}