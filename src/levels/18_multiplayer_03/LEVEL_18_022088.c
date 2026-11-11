/* LEVEL_18:0x022088 -- placement copy of LEVEL_16_022A40.c: calls two helpers with the same arguments and copies one word between their results. */

extern char *func_021710(int a0, int a1);
extern char *func_021758(int a0, int a1);

void func_022088(int a0, int a1)
{
    char *p;
    char *q;

    p = func_021710(a0, a1);
    q = func_021758(a0, a1);
    *(int *)(p + 0x40) = *(int *)(q + 0x3C);
}
