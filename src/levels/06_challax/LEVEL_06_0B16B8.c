/* LEVEL_06:0x0B16B8 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001E2EAC;

void func_0B1460(int i);
void func_0B12A0(int i);
void func_0B1988(int i, int v);
void func_0B1E00(int i);
void func_0B2180(int i);
void func_0B28A8(int i);
void func_0B3768(int i);
void func_0B1650(int i);

void func_0B16B8(void)
{
    int i;

    i = 0;
    do {
        func_0B1460(i);
        func_0B12A0(i);
        func_0B1988(i, *(int *)((char *)D_001E2EAC + 0x1C68));
        func_0B1E00(i);
        func_0B2180(i);
        func_0B28A8(i);
        func_0B3768(i);
        func_0B1650(i);
        i = i + 1;
    } while (i == 0);
}
