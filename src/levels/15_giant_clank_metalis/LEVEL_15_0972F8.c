/* LEVEL_15:0x0972F8 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_00148C2C;

void func_0970A0(int i);
void func_096EE0(int i);
void func_0975C8(int i, int v);
void func_097BA0(int i);
void func_097F20(int i);
void func_098648(int i);
void func_099508(int i);
void func_097290(int i);

void func_0972F8(void)
{
    int i;

    i = 0;
    do {
        func_0970A0(i);
        func_096EE0(i);
        func_0975C8(i, *(int *)((char *)D_00148C2C + 0x1C68));
        func_097BA0(i);
        func_097F20(i);
        func_098648(i);
        func_099508(i);
        func_097290(i);
        i = i + 1;
    } while (i == 0);
}
