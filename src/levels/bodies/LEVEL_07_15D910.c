/* LEVEL_07:0x15D910 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1D6E48(void);
extern void func_15CC68(char *a0, int a1, int a2);
extern void func_15D8A0(char *a0, int a1, int a2);

int func_15D910(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1D6E48();
        func_15CC68(a0, 2, 0);
    }
    func_15D8A0(a0, a1, a3);
    return 1;
}
