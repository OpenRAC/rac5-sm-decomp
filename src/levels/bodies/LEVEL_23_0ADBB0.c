/* LEVEL_23:0x0ADBB0 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001C73AC;

void func_0AD958(int i);
void func_0AD798(int i);
void func_0ADE80(int i, int v);
void func_0AE2C8(int i);
void func_0AE648(int i);
void func_0AED70(int i);
void func_0AFC30(int i);
void func_0ADB48(int i);

void func_0ADBB0(void)
{
    int i;

    i = 0;
    do {
        func_0AD958(i);
        func_0AD798(i);
        func_0ADE80(i, *(int *)((char *)D_001C73AC + 0x1C68));
        func_0AE2C8(i);
        func_0AE648(i);
        func_0AED70(i);
        func_0AFC30(i);
        func_0ADB48(i);
        i = i + 1;
    } while (i == 0);
}
