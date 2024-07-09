# zikoitikun_v2
## 利用する前に
使われているマイコンのXIAOに書き込むために以下のリンクよりセットアップしてください。

https://wiki.seeedstudio.com/XIAO_ESP32C3_Getting_Started/#getting-started

## 使用上の注意

.inoファイル名とリポジトリ名は揃えること。書き込む際は下記の設定にすること。デフォルトでは`Flash Mode`が`QIO`になっているので`DIO`に変更すること。

<img width="525" alt="Screenshot 2024-07-09 at 10 26 32 PM" src="https://github.com/hakoroboken/zikoitikun_v2/assets/53041471/2274686d-1560-4bbc-9671-1e611855dea9">


## Example

以下は全てmain.inoに記載する。

```C++
#include <zikoichi_kun_api_v2.hpp>

void setup() {
  zk_api_v2::setup();
}

void loop() {
  zk_api_v2::control_motor1(i);
  zk_api_v2::control_motor2(i);
  zk_api_v2::control_motor3(i);
  zk_api_v2::control_motor4(i);
}

```


## zk_api v2

### namespace
```C++
namespace zk_api_v2
```

### control

特定のモータの回転速度を決める

```C++
inline void control_motor1(int power)
```
```C++
inline void control_motor2(int power)
```
```C++
inline void control_motor3(int power)
```
```C++
inline void control_motor4(int power)
```

| 変数名 | 型 | 想定される範囲 |
|:-----------|------------:|:------------:|
| power   | int        | -255 ~ 255    |


### PWM

特定のモータのPWM dutyを決める

```C++
inline void motor1_pwm(int value)
```
```C++
inline void motor2_pwm(int value)
```
```C++
inline void motor3_pwm(int value)
```
```C++
inline void motor4_pwm(int value)
```

| 変数名 | 型 | 想定される範囲 |
|:-----------|------------:|:------------:|
| value   | int        | 0 ~ 255    |

### CW/CCW

特定のモータの回転方向を決める

```C++
inline void motor1_cw_ccw(PinStatus status)
```
```C++
inline void motor2_cw_ccw(PinStatus status)
```
```C++
inline void motor3_cw_ccw(PinStatus status)
```
```C++
inline void motor4_cw_ccw(PinStatus status)
```

| 変数名 | 型 | 想定される範囲 |
|:-----------|------------:|:------------:|
| value   | int        | 0 ~ 255    |
