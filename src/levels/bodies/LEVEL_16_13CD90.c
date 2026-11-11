/* LEVEL_16:0x13CD90 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_183550(void);
extern void func_13C000(char *a0, int a1, int a2);
extern void func_13CD10(char *a0, int a1, int a2);

int func_13CD90(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_183550();
        func_13C000(a0, 2, 0);
    }
    func_13CD10(a0, a1, a3);
    return 1;
}
