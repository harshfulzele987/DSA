#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>

int main()
{
    printf("now palying song");
  PlaySound(TEXT("G:\\music\\bit boxing"),NULL,SND_SYNC );
  Sleep(25000);
  return 0;
}
