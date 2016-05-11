cmake_minimum_required(VERSION 3.3)
project(HospitalManagementSystem)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Administrator.cpp Administrator.h Appointment.cpp Appointment.h Doctor.cpp Doctor.h Hospital.cpp Hospital.h Notification.cpp Notification.h Patient.cpp Patient.h Scheduling.h Scheduling.cpp Users.cpp Users.h)
add_executable(HospitalManagementSystem ${SOURCE_FILES})