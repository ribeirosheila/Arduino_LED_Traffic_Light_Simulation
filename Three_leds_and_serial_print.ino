#define led_red 4
#define led_yellow 2
#define led_green 3

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
  Serial.println("Iniciando o programa...");

  // Configura todas as LEDs como SAÍDA
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  Serial.println("Acendendo o LED verde");
  digitalWrite(led_red, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
  delay(200);

  Serial.println("Acendendo o LED amarelo");
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
  delay(200);

  Serial.println("Acendendo o LED vermelho");
  digitalWrite(led_red, HIGH);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
  delay(200);
}
