/* LEVEL_24:0x018E98 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_001C4C2C;
extern int D_001EB570;

int func_0195B0(void);
int func_0195C0(void);
void func_0195E8(void);
void func_024DB0(int a0, int a1, int a2);
void func_025558(void *a0);
void func_018E18(int a0, void *a1);

int func_018E98(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_001EB570;
        (*(int *)(D_001C4C2C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_0195B0() != 0) {
            r = (unsigned char)func_0195C0();
            func_024DB0(0x90, r, 0xFF);
            func_0195E8();
        }
    }
    func_025558(s0);
    func_018E18(7, s0);
    return 1;
}
