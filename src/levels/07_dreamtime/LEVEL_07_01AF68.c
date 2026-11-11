/* LEVEL_07:0x01AF68 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_002082AC;
extern int D_0022F4F0;

int func_01B680(void);
int func_01B690(void);
void func_01B6B8(void);
void func_0277E0(int a0, int a1, int a2);
void func_027F88(void *a0);
void func_01AEE8(int a0, void *a1);

int func_01AF68(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_0022F4F0;
        (*(int *)(D_002082AC + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01B680() != 0) {
            r = (unsigned char)func_01B690();
            func_0277E0(0x90, r, 0xFF);
            func_01B6B8();
        }
    }
    func_027F88(s0);
    func_01AEE8(7, s0);
    return 1;
}
