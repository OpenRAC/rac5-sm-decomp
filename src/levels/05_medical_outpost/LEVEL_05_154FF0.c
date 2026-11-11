/* LEVEL_05:0x154FF0 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1BA090(void);
extern void func_153B70(char *a0, int a1, int a2);
extern void func_154F80(char *a0, int a1, int a2);

int func_154FF0(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1BA090();
        func_153B70(a0, 2, 0);
    }
    func_154F80(a0, a1, a3);
    return 1;
}
