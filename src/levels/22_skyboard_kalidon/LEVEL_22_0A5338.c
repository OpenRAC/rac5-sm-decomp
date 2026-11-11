/* LEVEL_22:0x0A5338 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_0015332C;

void func_0A50E0(int i);
void func_0A4F20(int i);
void func_0A5608(int i, int v);
void func_0A5A50(int i);
void func_0A5DD0(int i);
void func_0A64F8(int i);
void func_0A73B8(int i);
void func_0A52D0(int i);

void func_0A5338(void)
{
    int i;

    i = 0;
    do {
        func_0A50E0(i);
        func_0A4F20(i);
        func_0A5608(i, *(int *)((char *)D_0015332C + 0x1C68));
        func_0A5A50(i);
        func_0A5DD0(i);
        func_0A64F8(i);
        func_0A73B8(i);
        func_0A52D0(i);
        i = i + 1;
    } while (i == 0);
}
