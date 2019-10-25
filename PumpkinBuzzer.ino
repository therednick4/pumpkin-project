int halloDistance;
int trigPin = 9;
int echoPin = 8;
int buzzPin = 2;
int xtone;
bool halloActive = 0;
long echoDuration;
long echoDistance = 500;
long prevDist = 500;
long twoprevDist = 500;
long PrevDist = 500;
int laserPin = 3;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  for (int y = 3; y < 6; y++) {
    pinMode(y, OUTPUT);
  }
  Serial.begin(19200);
}

void loop() {
  pingSensor();
  buzz();
  halloWeen();
}
