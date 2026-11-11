/* LEVEL_23:0x0193B8 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_001C73AC;
extern int D_001ED970;

int func_019AD0(void);
int func_019AE0(void);
void func_019B08(void);
void func_0251D8(int a0, int a1, int a2);
void func_025980(void *a0);
void func_019338(int a0, void *a1);

int func_0193B8(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_001ED970;
        (*(int *)(D_001C73AC + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_019AD0() != 0) {
            r = (unsigned char)func_019AE0();
            func_0251D8(0x90, r, 0xFF);
            func_019B08();
        }
    }
    func_025980(s0);
    func_019338(7, s0);
    return 1;
}
