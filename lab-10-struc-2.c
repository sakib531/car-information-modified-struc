#include<stdio.h>
#include<string.h>

struct my_structure
{
    char brand[50];
    char model[50];
    char color[50];
    char price[50];
    int year;
}car,car1;
int main()
{
    printf("Input the Brand of a Car:\n");
    gets(car.brand);

    printf("Input the Model of a Car:\n");
    gets(car.model);

    printf("Input the Color of a Car:\n");
    gets(car.color);

    printf("Input the Price of a Car:\n");
    gets(car.price);

    printf("Input the release year of a Car:\n");
    scanf("%i",&car.year);

    printf("Brand of the car:%s\n",car.brand);
    printf("Model of the car:%s\n",car.model);
    printf("Color of the car:%s\n",car.color);
    printf("Price of the car:%s\n",car.price);
    printf("Release Year of the car:%i\n",car.year);

    printf("input the Model of a Car:\n");
    scanf("%s",car1.model);

    printf("input the Color of a Car:\n");
    scanf("%s",car1.color);

    printf("input the Price of a Car:\n");
    scanf("%s",car1.price);

    printf("Brand of the car:%s\n",car.brand);
    printf("Model of the car:%s\n",car1.model);
    printf("Color of the car:%s\n",car1.color);
    printf("Price of the car:%s\n",car1.price);
    printf("Release Year of the car:%i\n",car.year);

return 0;
}
