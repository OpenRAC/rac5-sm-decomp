/* LEVEL_09:0x0B4098 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001DDDAC;

void func_0B3E40(int i);
void func_0B3C80(int i);
void func_0B4368(int i, int v);
void func_0B47B0(int i);
void func_0B4B30(int i);
void func_0B5258(int i);
void func_0B6118(int i);
void func_0B4030(int i);

void func_0B4098(void)
{
    int i;

    i = 0;
    do {
        func_0B3E40(i);
        func_0B3C80(i);
        func_0B4368(i, *(int *)((char *)D_001DDDAC + 0x1C68));
        func_0B47B0(i);
        func_0B4B30(i);
        func_0B5258(i);
        func_0B6118(i);
        func_0B4030(i);
        i = i + 1;
    } while (i == 0);
}
