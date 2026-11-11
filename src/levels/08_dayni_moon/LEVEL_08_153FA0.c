/* LEVEL_08:0x153FA0 -- placement copy of LEVEL_04_14EF08.c: resolves a handle, increments a byte-sized counter and stores it through a helper. */

extern void *func_154CE8(void *a0, int a1);
extern int func_027A30(void *a0, int a1);
extern void func_027AA8(void *a0, int a1, int a2);

int func_153FA0(void *a0)
{
    void *s0;
    int s1;

    s0 = func_154CE8(a0, -1);
    s1 = func_027A30(s0, 0xFF) + 1;
    func_027AA8(s0, s1 & 0xFF, 0xFF);
    return s1;
}
