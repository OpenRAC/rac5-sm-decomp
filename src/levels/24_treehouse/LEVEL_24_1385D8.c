/* LEVEL_24:0x1385D8 -- placement copy of LEVEL_04_14EF08.c: resolves a handle, increments a byte-sized counter and stores it through a helper. */

extern void *func_139320(void *a0, int a1);
extern int func_024D38(void *a0, int a1);
extern void func_024DB0(void *a0, int a1, int a2);

int func_1385D8(void *a0)
{
    void *s0;
    int s1;

    s0 = func_139320(a0, -1);
    s1 = func_024D38(s0, 0xFF) + 1;
    func_024DB0(s0, s1 & 0xFF, 0xFF);
    return s1;
}
