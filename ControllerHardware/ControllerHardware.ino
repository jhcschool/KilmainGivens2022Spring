const int button_pin = 2;

const int horizontal_pin = 0;
const int vertical_pin = 1;
const int red_pot_pin = 2;
const int green_pot_pin = 3;
const int blue_pot_pin = 4;
const int green_led = 9;
const int red_led = 10;

String output_data = "";

void setup() {
  pinMode(button_pin, INPUT);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  output_data = "[";
  add_data_to_output(digitalRead(button_pin));
  if (digitalRead(button_pin)){
    digitalWrite (green_led,HIGH);
    digitalWrite (red_led,LOW);
  }
  else {
    digitalWrite (green_led,LOW);
    digitalWrite (red_led, HIGH);
  }
  add_data_to_output(analogRead(horizontal_pin));
  add_data_to_output(analogRead(vertical_pin));
  add_data_to_output(analogRead(red_pot_pin));
  add_data_to_output(analogRead(green_pot_pin));
  add_data_to_output(analogRead(blue_pot_pin));
  output_data += "]";
  Serial.print(output_data);
}

void add_data_to_output(int data){
  output_data += data;
  output_data += ",";
}
