/* LEVEL_19:0x022680 -- placement copy of LEVEL_16_022A40.c: calls two helpers with the same arguments and copies one word between their results. */

extern char *func_021D08(int a0, int a1);
extern char *func_021D50(int a0, int a1);

void func_022680(int a0, int a1)
{
    char *p;
    char *q;

    p = func_021D08(a0, a1);
    q = func_021D50(a0, a1);
    *(int *)(p + 0x40) = *(int *)(q + 0x3C);
}
