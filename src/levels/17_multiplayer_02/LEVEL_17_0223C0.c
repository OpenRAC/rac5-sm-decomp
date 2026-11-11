/* LEVEL_17:0x0223C0 -- placement copy of LEVEL_16_022A40.c: calls two helpers with the same arguments and copies one word between their results. */

extern char *func_021A48(int a0, int a1);
extern char *func_021A90(int a0, int a1);

void func_0223C0(int a0, int a1)
{
    char *p;
    char *q;

    p = func_021A48(a0, a1);
    q = func_021A90(a0, a1);
    *(int *)(p + 0x40) = *(int *)(q + 0x3C);
}
