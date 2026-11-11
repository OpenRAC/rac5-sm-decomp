/* LEVEL_02:0x01B208 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_00208C2C;
extern int D_0022F770;

int func_01B920(void);
int func_01B930(void);
void func_01B958(void);
void func_027C68(int a0, int a1, int a2);
void func_028410(void *a0);
void func_01B188(int a0, void *a1);

int func_01B208(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_0022F770;
        (*(int *)(D_00208C2C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01B920() != 0) {
            r = (unsigned char)func_01B930();
            func_027C68(0x90, r, 0xFF);
            func_01B958();
        }
    }
    func_028410(s0);
    func_01B188(7, s0);
    return 1;
}
