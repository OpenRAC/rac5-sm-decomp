/* LEVEL_08:0x01B220 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_0023CB2C;
extern int D_00264470;

int func_01B938(void);
int func_01B948(void);
void func_01B970(void);
void func_027AA8(int a0, int a1, int a2);
void func_028250(void *a0);
void func_01B1A0(int a0, void *a1);

int func_01B220(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_00264470;
        (*(int *)(D_0023CB2C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01B938() != 0) {
            r = (unsigned char)func_01B948();
            func_027AA8(0x90, r, 0xFF);
            func_01B970();
        }
    }
    func_028250(s0);
    func_01B1A0(7, s0);
    return 1;
}
