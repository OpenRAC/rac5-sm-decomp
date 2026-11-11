/* LEVEL_03:0x15A7F8 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1DB488(void);
extern void func_1593B8(char *a0, int a1, int a2);
extern void func_15A788(char *a0, int a1, int a2);

int func_15A7F8(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1DB488();
        func_1593B8(a0, 2, 0);
    }
    func_15A788(a0, a1, a3);
    return 1;
}
