#include "Encoder.h"

BalanbotEncoder::BalanbotEncoder() :
  mInterruptPin (0),
  mDirectionPin (0),
  mPosition (0)
{

}

void BalanbotEncoder::SetInterruptPin(const int pin){
  mInterruptPin = pin;
}

void BalanbotEncoder::SetDirectionPin(const int pin){
  mDirectionPin = pin;
  //TODO
}

int BalanbotEncoder::GetInterruptPin(){
  return mInterruptPin;
}

int BalanbotEncoder::GetPosition(){
  return mPosition;
}

int BalanbotEncoder::GetPPR(){
  return PPR;
}

void BalanbotEncoder::ClearPosition(){
  mPosition = 0;
}

void BalanbotEncoder::Update(){
  //TODO
}