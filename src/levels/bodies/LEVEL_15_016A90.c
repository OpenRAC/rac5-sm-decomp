/* LEVEL_15:0x016A90 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_00148C2C;
extern int D_0016EF70;

int func_0171A8(void);
int func_0171B8(void);
void func_0171E0(void);
void func_021470(int a0, int a1, int a2);
void func_021BD8(void *a0);
void func_016A10(int a0, void *a1);

int func_016A90(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_0016EF70;
        (*(int *)(D_00148C2C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_0171A8() != 0) {
            r = (unsigned char)func_0171B8();
            func_021470(0x90, r, 0xFF);
            func_0171E0();
        }
    }
    func_021BD8(s0);
    func_016A10(7, s0);
    return 1;
}
