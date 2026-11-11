/* LEVEL_04:0x01A528 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_0020D12C;
extern int D_00234170;

int func_01AC40(void);
int func_01AC50(void);
void func_01AC78(void);
void func_027110(int a0, int a1, int a2);
void func_0278B8(void *a0);
void func_01A4A8(int a0, void *a1);

int func_01A528(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_00234170;
        (*(int *)(D_0020D12C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01AC40() != 0) {
            r = (unsigned char)func_01AC50();
            func_027110(0x90, r, 0xFF);
            func_01AC78();
        }
    }
    func_0278B8(s0);
    func_01A4A8(7, s0);
    return 1;
}
