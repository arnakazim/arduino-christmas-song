/*
 * We Wish You a Merry Christmas
 * 
 * Based on Y.A.Chong's work (http://myarduinomelodies.blogspot.com/2013/11/3-we-wish-you-merry-christmas.html)
 */

int merryChristmasTempo = 120;

int merryChristmasNotes[] = {
    N_G4, N_C5, N_C5, N_D5, N_C5, N_B4, N_A4, N_A4,
    N_A4, N_D5, N_D5, N_E5, N_D5, N_C5, N_B4, N_G4,
    N_G4, N_E5, N_E5, N_F5, N_E5, N_D5, N_C5, N_A5,
    N_G4, N_G4, N_A4, N_D5, N_B4, N_C5, N_G4, N_C5,
    N_C5, N_D5, N_C5, N_B4, N_A4, N_A4, N_A4, N_D5,
    N_D5, N_E5, N_D5, N_C5, N_B4, N_G4, N_G4, N_E5,
    N_E5, N_F5, N_E5, N_D5, N_C5, N_A5, N_G4, N_G4,
    N_A4, N_D5, N_B4, N_C5, N_G4, N_C5, N_C5, N_C5,
    N_B4, N_B4, N_C5, N_B4, N_A4, N_G4, N_D5, N_E5,
    N_D5, N_D5, N_C5, N_C5, N_G5, N_G4, N_G4, N_G4,
    N_A4, N_D5, N_B4, N_C5};

int merryChristmasDurations[] = {
    4, 4, 8, 8, 8, 8, 4, 4,
    4, 4, 8, 8, 8, 8, 4, 4,
    4, 4, 8, 8, 8, 8, 4, 4,
    8, 8, 4, 4, 4, 2, 4, 4,
    8, 8, 8, 8, 4, 4, 4, 4,
    8, 8, 8, 8, 4, 4, 4, 4,
    8, 8, 8, 8, 4, 4, 8, 8,
    4, 4, 4, 2, 4, 4, 4, 4,
    2, 4, 4, 4, 4, 2, 4, 4,
    8, 8, 8, 8, 4, 4, 8, 8,
    4, 4, 4, 2};