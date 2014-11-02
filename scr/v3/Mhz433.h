#ifdef RECEIVER_433
  // Receiver on inerrupt 0 => that is pin #2
  void Init433Mhz(){
    mySwitch.enableReceive(0);
  }

  void Recepcion433Mhz() {
    if (mySwitch.available()) {
      
      int value = mySwitch.getReceivedValue();
      
      if (value == 0) {
        Serial.print("Unknown encoding");
      } else {
        Serial.print("Received ");
        Serial.print( mySwitch.getReceivedValue() );
        Serial.print(" / ");
        Serial.print( mySwitch.getReceivedBitlength() );
        Serial.print("bit ");
        Serial.print("Protocol: ");
        Serial.println( mySwitch.getReceivedProtocol() );
      }
  
      mySwitch.resetAvailable();
   }
}
#endif

#ifdef ELECTRIC_OUTLET_433
  void Electric_Outlet_Control(int NumberSwicth,boolean  On){
      
  }
#endif
