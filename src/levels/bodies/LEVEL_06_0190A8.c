/* LEVEL_06:0x0190A8 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_001E2EAC;
extern int D_00209670;

int func_0197C0(void);
int func_0197D0(void);
void func_0197F8(void);
void func_025930(int a0, int a1, int a2);
void func_0261D8(void *a0);
void func_019028(int a0, void *a1);

int func_0190A8(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_00209670;
        (*(int *)(D_001E2EAC + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_0197C0() != 0) {
            r = (unsigned char)func_0197D0();
            func_025930(0x90, r, 0xFF);
            func_0197F8();
        }
    }
    func_0261D8(s0);
    func_019028(7, s0);
    return 1;
}
