/* LEVEL_01:0x1607F0 -- when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1CAC80(void);
extern void func_15FB48(char *a0, int a1, int a2);
extern void func_160780(char *a0, int a1, int a2);

int func_1607F0(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1CAC80();
        func_15FB48(a0, 2, 0);
    }
    func_160780(a0, a1, a3);
    return 1;
}
