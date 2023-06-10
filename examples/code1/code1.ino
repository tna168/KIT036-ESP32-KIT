int val;//定義全域變數 val
int ledpin=13;//定義GPIO13
void setup()
{
Serial.begin(9600);//設置串列傳輸速率為9600，這裡要跟軟體設置相一致。當接入特定設備（如：藍芽）時，我們也要跟其他設備的串列傳輸速率達到一致。
pinMode(ledpin,OUTPUT);//設置GPIO13為輸出介面，Arduino 上我們用到的GPIO都要進行類似這樣的定義。
}
void loop()
{
val=Serial.read();//讀取PC 機發送給Arduino 的指令或字元，並將該指令或字元賦給val
if(val=='R')//判斷接收到的指令或字元是否是“R”。
{//如果接收到的是“R”字元
digitalWrite(ledpin,HIGH);//點亮板載GPIO13的LED。
delay(500);
digitalWrite(ledpin,LOW);//點亮板載GPIO13的LED
delay(500);
Serial.println("Hello World!");//顯示“Hello World！”字串
}
}
