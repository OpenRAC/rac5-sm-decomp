/* LEVEL_08:0x171C98 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_205670(void);
extern void func_170FF0(char *a0, int a1, int a2);
extern void func_171C28(char *a0, int a1, int a2);

int func_171C98(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_205670();
        func_170FF0(a0, 2, 0);
    }
    func_171C28(a0, a1, a3);
    return 1;
}
