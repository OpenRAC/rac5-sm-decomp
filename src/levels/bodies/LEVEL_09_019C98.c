/* LEVEL_09:0x019C98 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_001DDDAC;
extern int D_002043F0;

int func_01A3B0(void);
int func_01A3C0(void);
void func_01A3E8(void);
void func_026488(int a0, int a1, int a2);
void func_026C30(void *a0);
void func_019C18(int a0, void *a1);

int func_019C98(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_002043F0;
        (*(int *)(D_001DDDAC + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01A3B0() != 0) {
            r = (unsigned char)func_01A3C0();
            func_026488(0x90, r, 0xFF);
            func_01A3E8();
        }
    }
    func_026C30(s0);
    func_019C18(7, s0);
    return 1;
}
