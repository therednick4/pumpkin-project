int buzzDis = 500;
void buzz() {

  if (buzzDis > 125) {
    if (xtone > 200) {
      xtone -= 100;
    }
    halloActive = 0;
    noTone(buzzPin);
    Serial.print("  I should be off now   : ");
    Serial.println(buzzDis);

  } else if (buzzDis <= 125) {
    halloActive = 1;
  } 
  Serial.println("Tone");
  Serial.println(xtone);
}
