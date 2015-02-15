# Grab Bag 500 Instructions

1. Unpack the exe
  a. Upx.exe –d BobsReallyAmazingTthingamajig.exe
2. Open BobsReallyAmazingTthingamajig.exe in windbg
3. Run until you find the main function
4. Bypass simple debugger check
  a. Line in src if(dbgFound)
5. Run till you find where the program asks for the cdkey
6. Jmp pass the check for a vaid key
7. Program prints out flag