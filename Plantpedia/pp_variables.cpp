#include <iostream>
#include "pp_vegetable.cpp"

using namespace std;

int static ui;

flower const rose("Rose", "Flower", "Spring", "Rose is the symbol of love.", "red", "close");
flower const violet("Violet", "Flower", "Fall", "I like Violet's color.", "purple", "open");
flower const sunflower("Sunflower", "Flower", "Summer", "Turkish people love this flower.", "yellow", "open");

tree const oak("Oak Tree", "Tree", "Spring", "The most common tree i think.", "broadleaf");
tree const palm("Palm Tree", "Tree", "Winter", "Santa's favourite tree.", "conifer");
tree const teak("Teak Tree", "Tree", "Spring", "Teak tree give me summer vibes.", "broadleaf");

fruit const apple("Apple", "Fruit", "Fall", "Green ones are better.", "red", true);
fruit const orange("Orange", "Fruit", "Winter", "Dorm gives it everyday so I don't like it anymore.", "orange", false);
fruit const banana("Banana", "Fruit", "Summer", "Do I look like a monkey?", "yellow", true);

vegetable const carrot("Carrot", "Vegetable", "Winter", "I use glasses.", "orange", true);
vegetable const garlic("Garlic", "Vegetable", "Summer", "Good with meat.", "white", false);
vegetable const spinach("Spinach", "Vegetable", "Spring", "Do you want muscles?", "green", true);


plant const plants[] = {rose, violet, sunflower, oak, palm, teak, apple, orange, banana, carrot, garlic, spinach};





