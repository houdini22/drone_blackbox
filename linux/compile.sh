#!/bin/bash

qmake nienazwany.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug && make
