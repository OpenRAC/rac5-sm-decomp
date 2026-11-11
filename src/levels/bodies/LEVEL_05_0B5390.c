/* LEVEL_05:0x0B5390 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_001E332C;

void func_0B5138(int i);
void func_0B4F78(int i);
void func_0B5660(int i, int v);
void func_0B5AA8(int i);
void func_0B5E28(int i);
void func_0B6550(int i);
void func_0B7410(int i);
void func_0B5328(int i);

void func_0B5390(void)
{
    int i;

    i = 0;
    do {
        func_0B5138(i);
        func_0B4F78(i);
        func_0B5660(i, *(int *)((char *)D_001E332C + 0x1C68));
        func_0B5AA8(i);
        func_0B5E28(i);
        func_0B6550(i);
        func_0B7410(i);
        func_0B5328(i);
        i = i + 1;
    } while (i == 0);
}
