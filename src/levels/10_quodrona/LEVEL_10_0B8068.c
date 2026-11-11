/* LEVEL_10:0x0B8068 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001FCFAC;

void func_0B7E10(int i);
void func_0B7C50(int i);
void func_0B8338(int i, int v);
void func_0B8848(int i);
void func_0B8BC8(int i);
void func_0B92F0(int i);
void func_0BA1B0(int i);
void func_0B8000(int i);

void func_0B8068(void)
{
    int i;

    i = 0;
    do {
        func_0B7E10(i);
        func_0B7C50(i);
        func_0B8338(i, *(int *)((char *)D_001FCFAC + 0x1C68));
        func_0B8848(i);
        func_0B8BC8(i);
        func_0B92F0(i);
        func_0BA1B0(i);
        func_0B8000(i);
        i = i + 1;
    } while (i == 0);
}
