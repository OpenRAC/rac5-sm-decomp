/* LEVEL_16:0x022A40 -- calls two helpers with the same arguments and copies one word between their results. */

extern char *func_0220C8(int a0, int a1);
extern char *func_022110(int a0, int a1);

void func_022A40(int a0, int a1)
{
    char *p;
    char *q;

    p = func_0220C8(a0, a1);
    q = func_022110(a0, a1);
    *(int *)(p + 0x40) = *(int *)(q + 0x3C);
}
