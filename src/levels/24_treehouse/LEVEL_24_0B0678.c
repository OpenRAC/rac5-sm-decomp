/* LEVEL_24:0x0B0678 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001C4C2C;

void func_0B0420(int i);
void func_0B0260(int i);
void func_0B0948(int i, int v);
void func_0B0D90(int i);
void func_0B1110(int i);
void func_0B1838(int i);
void func_0B26F8(int i);
void func_0B0610(int i);

void func_0B0678(void)
{
    int i;

    i = 0;
    do {
        func_0B0420(i);
        func_0B0260(i);
        func_0B0948(i, *(int *)((char *)D_001C4C2C + 0x1C68));
        func_0B0D90(i);
        func_0B1110(i);
        func_0B1838(i);
        func_0B26F8(i);
        func_0B0610(i);
        i = i + 1;
    } while (i == 0);
}
