/* LEVEL_08:0x0C1CD8 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_0023CB2C;

void func_0C1A80(int i);
void func_0C18C0(int i);
void func_0C1FA8(int i, int v);
void func_0C23F0(int i);
void func_0C2770(int i);
void func_0C2E98(int i);
void func_0C3D58(int i);
void func_0C1C70(int i);

void func_0C1CD8(void)
{
    int i;

    i = 0;
    do {
        func_0C1A80(i);
        func_0C18C0(i);
        func_0C1FA8(i, *(int *)((char *)D_0023CB2C + 0x1C68));
        func_0C23F0(i);
        func_0C2770(i);
        func_0C2E98(i);
        func_0C3D58(i);
        func_0C1C70(i);
        i = i + 1;
    } while (i == 0);
}
