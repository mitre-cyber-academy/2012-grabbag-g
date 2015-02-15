#include <stdio.h>
#include <string.h>
#include <windows.h>

int dothis();
int dothat();
int dotheotherthing();
int cdkey();

int cdkey() {
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",80,108,101,97,115,101,32,69,110,116,101,114,32,65,32,67,68,32,75,101,121);
	char input;
	scanf_s("%c", &input,1);
	if(false) {
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",87,101,108,99,111,109,101,32,116,111,32,66,111,98,39,115,32,115,117,112,101,114,32,115,101,99,114,101,116,32,112,114,111,103,114,97,109,92,110,32,89,111,117,114,32,99,111,100,101,32,105,115,32,77,67,65,45,49,65,57,52,65,57,67,50,92,110);
	}
	else {
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",83,111,114,114,121,32,80,108,101,97,115,101,32,116,114,121,32,97,103,97,105,110);
	}
	return 0;
}

int dothis(){int (*keyptr)(void);keyptr=dothat;return keyptr();}
int dothat(){int (*keyptr)(void);keyptr=dotheotherthing;return keyptr();}
int dotheotherthing(){int (*keyptr)(void);keyptr=cdkey;return keyptr();}

void moreawesomefunctions(){
	__asm pop eax
	__asm pop ebx
	__asm push ebp
	__asm mov ebp,esp
	__asm push ecx
	__asm push ebx
	__asm push esi
	__asm push edi
	__asm push ecx
	__asm xor edi,edi
	__asm mov esi,edx
	__asm pop eax
	__asm pop ebx
	__asm push ebx
	__asm push esi
	__asm push edi
	__asm xor edi,edi
	__asm mov esi,edx
	__asm pop eax
	__asm pop ebx
	__asm push ebp
	__asm mov  ebp,esp
	__asm push ebx
	__asm push esi
	__asm push edi
	__asm xor edi,edi
	__asm mov esi,edx
	__asm pop eax
	__asm pop ebx
	__asm push ebp
	__asm mov  ebp,esp
	__asm push ecx
	__asm push ebx
	__asm push esi
	__asm push edi
	__asm push ebp
	__asm mov  ebp,esp
	__asm push ecx
	__asm xor edi,edi
	__asm mov esi,edx
	__asm pop eax
	__asm pop ebx
	__asm push ebp
	__asm mov  ebp,esp
	__asm push ecx
	__asm push ebx
	__asm push esi
	__asm push edi
	__asm xor edi,edi
	__asm mov esi,edx
}
int main(int argc, char **argv) {
	char dbgFound = 0;
	__asm {
		 mov eax, fs:[30h]
		 mov al, [eax + 2h]
		 mov dbgFound, al
	}
	if(dbgFound) {
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",66,111,98,32,100,111,101,115,32,110,111,116,32,108,105,107,101,32,111,116,104,101,114,32,112,101,111,112,108,101,32,109,101,115,115,105,110,103,32,119,105,116,104,32,104,105,115,32,99,111,100,101,33);
		return 0;
	}

	dothis();
	return 0;
}