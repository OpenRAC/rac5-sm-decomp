/* LEVEL_20:0x01F6E8 -- placement copy of LEVEL_16_022A40.c: calls two helpers with the same arguments and copies one word between their results. */

extern char *func_01EDC8(int a0, int a1);
extern char *func_01EE10(int a0, int a1);

void func_01F6E8(int a0, int a1)
{
    char *p;
    char *q;

    p = func_01EDC8(a0, a1);
    q = func_01EE10(a0, a1);
    *(int *)(p + 0x40) = *(int *)(q + 0x3C);
}
