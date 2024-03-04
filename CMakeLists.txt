cmake_minimum_required(VERSION 3.27)
project(labvadim)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(labvadim
        Appointment.cpp
        Appointment.h
        Doctor.cpp
        Doctor.h
        main.cpp
        Patient.cpp
        Patient.h
        Paymentinfo.cpp
        Paymentinfo.h)
