/* LEVEL_07:0x0B8E48 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_002082AC;

void func_0B8BF0(int i);
void func_0B8A30(int i);
void func_0B9118(int i, int v);
void func_0B9560(int i);
void func_0B98E0(int i);
void func_0BA008(int i);
void func_0BAEC8(int i);
void func_0B8DE0(int i);

void func_0B8E48(void)
{
    int i;

    i = 0;
    do {
        func_0B8BF0(i);
        func_0B8A30(i);
        func_0B9118(i, *(int *)((char *)D_002082AC + 0x1C68));
        func_0B9560(i);
        func_0B98E0(i);
        func_0BA008(i);
        func_0BAEC8(i);
        func_0B8DE0(i);
        i = i + 1;
    } while (i == 0);
}
