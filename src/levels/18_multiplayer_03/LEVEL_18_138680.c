/* LEVEL_18:0x138680 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_183B88(void);
extern void func_1378F0(char *a0, int a1, int a2);
extern void func_138600(char *a0, int a1, int a2);

int func_138680(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_183B88();
        func_1378F0(a0, 2, 0);
    }
    func_138600(a0, a1, a3);
    return 1;
}
