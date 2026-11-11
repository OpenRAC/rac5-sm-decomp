/* LEVEL_06:0x150F00 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1B70E8(void);
extern void func_14FAC0(char *a0, int a1, int a2);
extern void func_150E90(char *a0, int a1, int a2);

int func_150F00(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1B70E8();
        func_14FAC0(a0, 2, 0);
    }
    func_150E90(a0, a1, a3);
    return 1;
}
