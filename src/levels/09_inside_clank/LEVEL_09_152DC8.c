/* LEVEL_09:0x152DC8 -- placement copy of LEVEL_01_1607F0.c: when the flag is zero, calls a probe and a helper first; then calls a second helper with the object, a1 and a3; returns 1. */
extern void func_1B11A0(void);
extern void func_151988(char *a0, int a1, int a2);
extern void func_152D58(char *a0, int a1, int a2);

int func_152DC8(char *a0, int a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1B11A0();
        func_151988(a0, 2, 0);
    }
    func_152D58(a0, a1, a3);
    return 1;
}
