#include <FastLED.h>
#include "InteractiveMatrix.h"
#include "consts/Protoype450Consts.h"
#include "snake/Snake.h"
#include "snake/Fruit.h"
#include "fonts/three_to_five5pt7b.h"

#define PIN 6

CRGB matrixleds[N_PIXELS];
InteractiveMatrix *matrix = new InteractiveMatrix(matrixleds, N_PIXELS_HORIZONTAL, N_PIXELS_VERTICAL, MATRIX_TYPE);

Snake< N_PIXELS > *snake = new Snake< N_PIXELS >(8, 5, matrix, 2);
Fruit *fruit = new Fruit(matrix);
uint16_t currentScore = 0;
uint16_t highScore = 0;

const uint16_t colors[] = {
  matrix->Color(255, 0, 0), matrix->Color(0, 255, 0), matrix->Color(0, 0, 255) };

void setup() {
  pinMode(TRIGGER, INPUT_PULLUP);
  
  Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL,PIN>(matrixleds, N_PIXELS); 
  
  matrix->begin();
  matrix->setFont(&three_to_five5pt7b);
  fruit->draw();
  snake->draw();
  matrix->show();
}


void loop() {
  snake->move();
  snake->draw(); // TODO check this implementation

  if( snake->isDead() ) {
        matrix->clear();
        matrix->show();
        
        if (currentScore > highScore) {
          highScore = currentScore;
        }
        
        matrix->setCursor(1, 4);
        matrix->print("You  \n" + String(currentScore));
        
        matrix->show();
        delay(1250);
        currentScore = 0;
        matrix->clear();
        matrix->show();

        matrix->setCursor(1, 4);
        matrix->print("Top  \n" + String(highScore));
        matrix->show();
        delay(1250);
        matrix->clear();
        matrix->show();
        
        snake->createStartSnake();
        snake->draw();
        fruit->resetPos();
        fruit->draw();
    }

  if( fruit->isEaten(snake->head.x, snake->head.y) ){
    fruit->undraw();
    fruit->resetPos();
    snake->eatFruit();
    snake->draw();
    fruit->draw();
    currentScore++;
  }

  matrix->show(); // TODO check this implementation
  delay(200);
}
