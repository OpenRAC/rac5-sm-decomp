/* LEVEL_03:0x0B6BD0 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_0020C62C;

void func_0B6978(int i);
void func_0B67B8(int i);
void func_0B6EA0(int i, int v);
void func_0B72E8(int i);
void func_0B7668(int i);
void func_0B7D90(int i);
void func_0B8C50(int i);
void func_0B6B68(int i);

void func_0B6BD0(void)
{
    int i;

    i = 0;
    do {
        func_0B6978(i);
        func_0B67B8(i);
        func_0B6EA0(i, *(int *)((char *)D_0020C62C + 0x1C68));
        func_0B72E8(i);
        func_0B7668(i);
        func_0B7D90(i);
        func_0B8C50(i);
        func_0B6B68(i);
        i = i + 1;
    } while (i == 0);
}
