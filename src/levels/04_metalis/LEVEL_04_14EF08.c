/* LEVEL_04:0x14EF08 -- resolves a handle, increments a byte-sized counter and stores it through a helper. */

extern void *func_14FC50(void *a0, int a1);
extern int func_027098(void *a0, int a1);
extern void func_027110(void *a0, int a1, int a2);

int func_14EF08(void *a0)
{
    void *s0;
    int s1;

    s0 = func_14FC50(a0, -1);
    s1 = func_027098(s0, 0xFF) + 1;
    func_027110(s0, s1 & 0xFF, 0xFF);
    return s1;
}
