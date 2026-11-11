/* LEVEL_02:0x175200 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1DFDA0(void);
extern void func_173DC0(char *a0, int a1, int a2);
extern void func_175190(char *a0, int a1, int a2);

int func_175200(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1DFDA0();
        func_173DC0(a0, 2, 0);
    }
    func_175190(a0, a1, a3);
    return 1;
}
