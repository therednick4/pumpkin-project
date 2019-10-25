void pingSensor() {
  digitalWrite(trigPin, LOW); // Refreshes the trigger pin for the US sensor
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // Sends an ultrasonic signal out
  delayMicroseconds(8); // Keeps sending the US signal for 10 microseconds
  digitalWrite(trigPin, LOW); // Turns off the signal
  echoDuration = pulseIn(echoPin, HIGH); // Turns on the receiver on the US component.
  echoDistance = echoDuration /29 / 2; // Calculates the distance based on the duration of the signal
  
  int y = echoDistance * 10;
  if (echoDistance > y) {
    echoDistance = prevDist;
  }
  buzzDis = echoDistance;
  prevDist = echoDistance;
    Serial.print("Distance: ");
    Serial.println(echoDistance); // Prints the distance in the serial browser
}
