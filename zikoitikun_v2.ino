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

#include <zikoichi_kun_api_v2.hpp>

void setup() {
  zk_api_v2::setup();
}

void loop() {

  for(int i = -64; i < 64; ++i)
  {
    zk_api_v2::control_motor1(i);
    zk_api_v2::control_motor2(i);
    zk_api_v2::control_motor3(i);
    zk_api_v2::control_motor4(i);
    delay(50);
  }
  for(int i = 64; i > -64; --i)
  {
    zk_api_v2::control_motor1(i);
    zk_api_v2::control_motor2(i);
    zk_api_v2::control_motor3(i);
    zk_api_v2::control_motor4(i);
    delay(50);
  }
}
