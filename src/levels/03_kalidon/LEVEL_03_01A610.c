/* LEVEL_03:0x01A610 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_0020C62C;
extern int D_002336F0;

int func_01AD28(void);
int func_01AD38(void);
void func_01AD60(void);
void func_027360(int a0, int a1, int a2);
void func_027B08(void *a0);
void func_01A590(int a0, void *a1);

int func_01A610(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_002336F0;
        (*(int *)(D_0020C62C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01AD28() != 0) {
            r = (unsigned char)func_01AD38();
            func_027360(0x90, r, 0xFF);
            func_01AD60();
        }
    }
    func_027B08(s0);
    func_01A590(7, s0);
    return 1;
}
