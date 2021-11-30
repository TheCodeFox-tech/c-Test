
#include <stdio.h>

#include <winuser.h>

int main() {
   //printf("Hello World!");
   
   int msgboxID = MessageBox(NULL, (LPCWSTR)L"Resource not available\nDo you want to try again?", (LPCWSTR)L"Account Details", MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2);
   int a = 0;
   
   switch (msgboxID)
    {
    case IDCANCEL:
        a = 1;
        break;
    case IDTRYAGAIN:
        a = 2;
        break;
    case IDCONTINUE:
        a = 3;
        break;
    }

   return msgboxID;
}
