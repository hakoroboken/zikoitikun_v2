// Copyright 2024 Hakoroboken
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ZIKOICHI_KUN_API_V2_HPP_
#define ZIKOICHI_KUN_API_V2_HPP_

#include <HardwareSerial.h>

namespace zk_api_v2 {

  HardwareSerial IM920Serial(0);

  inline void setup(void){
    pinMode(D1,OUTPUT); // CW.CCW-1 FR
    pinMode(D3,OUTPUT); // CW.CCW-2 FL
    pinMode(D5,OUTPUT); // CW.CCW-3 RL
    pinMode(D8,OUTPUT); // CW.CCW-4 RR

    IM920Serial.begin(115200, SERIAL_8N1, -1, -1);
  }

  inline void motor1_pwm(int value){
    analogWrite(D0,value);
  }
  inline void motor2_pwm(int value){
    analogWrite(D2,value);
  }
  inline void motor3_pwm(int value){
    analogWrite(D4,value);
  }
  inline void motor4_pwm(int value){
    analogWrite(D10,value);
  }

  inline void motor1_cw_ccw(int status){
    digitalWrite(D1,status);
  }
  inline void motor2_cw_ccw(int status){
    digitalWrite(D3,status);
  }
  inline void motor3_cw_ccw(int status){
    digitalWrite(D5,status);
  }
  inline void motor4_cw_ccw(int status){
    digitalWrite(D8,status);
  }

  inline void control_motor1(int power){
    if(power > 255){power = 255;}
    if(power < -255){power = -255;}

    motor1_pwm(abs(power));
    
    if(power > 0){
      motor1_cw_ccw(HIGH);
    }else{
      motor1_cw_ccw(LOW);
    }
  }
  inline void control_motor2(int power){
    if(power > 255){power = 255;}
    if(power < -255){power = -255;}

    motor2_pwm(abs(power));
    
    if(power > 0){
      motor2_cw_ccw(HIGH);
    }else{
      motor2_cw_ccw(LOW);
    }
  }
  inline void control_motor3(int power){
    if(power > 255){power = 255;}
    if(power < -255){power = -255;}

    motor3_pwm(abs(power));
    
    if(power > 0){
      motor3_cw_ccw(HIGH);
    }else{
      motor3_cw_ccw(LOW);
    }
  }
  inline void control_motor4(int power){
    if(power > 255){power = 255;}
    if(power < -255){power = -255;}

    motor4_pwm(abs(power));
    
    if(power > 0){
      motor4_cw_ccw(HIGH);
    }else{
      motor4_cw_ccw(LOW);
    }
  }
}
#endif
