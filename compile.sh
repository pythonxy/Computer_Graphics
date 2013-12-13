#!/bin/bash

clear

echo "compile time"

gcc ./Resources/3DCurve.cpp ./Draw_Animal.cpp ./Draw_Tail.cpp ./Draw_Tail_Seg.cpp ./Draw_Wing_End.cpp ./Draw_Whole_Wing.cpp ./Resources/drawD.cpp ./Resources/drawT.cpp ./Resources/drawM.cpp ./Resources/drawMM.cpp ./Resources/drawF.cpp ./Resources/drawC.cpp ./Resources/cube.cpp ./mainBat.cpp ./Draw_Wing_Pt2.cpp ./Draw_Wing_Pt1.cpp ./Draw_Body.cpp ./Draw_Head.cpp -o tester -lGLU -lglut -lGL -lm

echo "complete"

./tester
