/* LEVEL_02:0x0BD6F8 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_00208C2C;

void func_0BD4A0(int i);
void func_0BD2E0(int i);
void func_0BD9C8(int i, int v);
void func_0BDE10(int i);
void func_0BE190(int i);
void func_0BE8B8(int i);
void func_0BF778(int i);
void func_0BD690(int i);

void func_0BD6F8(void)
{
    int i;

    i = 0;
    do {
        func_0BD4A0(i);
        func_0BD2E0(i);
        func_0BD9C8(i, *(int *)((char *)D_00208C2C + 0x1C68));
        func_0BDE10(i);
        func_0BE190(i);
        func_0BE8B8(i);
        func_0BF778(i);
        func_0BD690(i);
        i = i + 1;
    } while (i == 0);
}
