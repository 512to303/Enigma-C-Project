# Enigma-C-Project
Enigma Encryption Code used during WW2.


Order of Operations: 

I) After main is called

  A) Prompt to encrpyt or decrypt
  
  B) Set off corresponding process 
  
 
 
II) Encrypt 

  A) Prompt method of getting message ( file.txt or stdin )
  

  B) Get message 
  
  C) Format the message ( no spaces or punctuation; done without prompting user )
  
  D) Prompt to set rotors ( possibily use the same function as the -r option )
  
  E) Prompt to set Ringstellung
  
  F) Prompt to set Steckerverbindungen
  
  G) Go through encryption algorithm based on the entered settings
  
  H) Print encrypted message
  
  I) Go to "menu" screen. Have y/n option to save the settings just provided for more en/de-cryption before moving on
  
  

III) Decrypt
  
  A) Prompt asking for method of getting message ( file.txt or stdin )
  
  B) Get message 
  
  C) Format the message ( no spaces or punctuation; done without prompting user )
  
  D) Prompt to set rotors 
  
  E) Prompt to set Ringstellung 
  
  F) Prompt to set Steckerverbindungen
  
  G) Go through decryption algorithm based on the entered settings
  
  H) Print decrypted message 
  
  I) Go to "menu" screen. Have y/n option to save the settings just provided for more en/de-cryption before moving on
  
  

IV) Menu 1
  
  A) Shows options available to use from the beginning ( -e, -d, -h ) and example settings
  
  B) Only allows for encryption or decryption. All other options tell the user that only three options are available until the program        is run through once
  
  C) Option to show user how the program works and the flags available 
  
  

V) Menu 2
  
  A) Shows all options available to change the settings or see help page
  
  B) Can run encryption/decryption program again 
  
  
  

VI) Options
  
  -h -> help menu and how the Enigma Machine works
  
  -e -> encrypt a message
  
  -d -> decrypt a message
  
  -t -> enter text via a file from the same directory as the program
  
  -k -> enter text from stdin/keyboard
  
  -r -> modify rotor characters
  
  -rs -> modify Ringstellung number/character
  
  -p -> modify plugboard settings
  
  Enter numbers as text. For example "ONE, TWO, THREE, FOUR" 
  
  ** Each modify option prints a short example of what is accepted as correct 
    input/formatting ** 
  
  
  
