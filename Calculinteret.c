//Calcul d'intérêt avec taux 
#include <stdio.h>

int main() {
    double initial_amount;
    double monthly_deposit;
    double annual_interest_rate;
    int months = 12; 

    printf("Veuillez entrer le montant initial : ");
    scanf_s("%lf", &initial_amount);

    printf("Veuillez entrer le dépôt mensuel : ");
    scanf_s("%lf", &monthly_deposit);

    printf("Veuillez entrer le taux d'intérêt annuel (en pourcentage) : ");
    scanf_s("%lf", &annual_interest_rate);
    annual_interest_rate /= 100; git add Calculinteret.c


    double balance = initial_amount;
    for (int i = 0; i < months; i++) {
        balance += monthly_deposit;
        balance += balance * (annual_interest_rate / 12);
    }

    printf("Le solde après %d mois est de %.2f€\n", months, balance);

    return 0;
}
