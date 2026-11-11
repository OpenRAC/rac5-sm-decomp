/* LEVEL_04:0x0BC5F0 -- placement copy of LEVEL_01_0B6DE8.c: runs six per-index helpers in sequence, using a pointer loaded from a global. */

extern void *D_0020D12C;

void func_0BC398(int i);
void func_0BC1D8(int i);
void func_0BC8C0(int i, int v);
void func_0BCD08(int i);
void func_0BD088(int i);
void func_0BD7B0(int i);
void func_0BE670(int i);
void func_0BC588(int i);

void func_0BC5F0(void)
{
    int i;

    i = 0;
    do {
        func_0BC398(i);
        func_0BC1D8(i);
        func_0BC8C0(i, *(int *)((char *)D_0020D12C + 0x1C68));
        func_0BCD08(i);
        func_0BD088(i);
        func_0BD7B0(i);
        func_0BE670(i);
        func_0BC588(i);
        i = i + 1;
    } while (i == 0);
}
