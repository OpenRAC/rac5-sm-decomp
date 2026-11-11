/* LEVEL_05:0x019E40 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_001E332C;
extern int D_002096F0;

int func_01A558(void);
int func_01A568(void);
void func_01A590(void);
void func_0261C0(int a0, int a1, int a2);
void func_026A68(void *a0);
void func_019DC0(int a0, void *a1);

int func_019E40(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_002096F0;
        (*(int *)(D_001E332C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01A558() != 0) {
            r = (unsigned char)func_01A568();
            func_0261C0(0x90, r, 0xFF);
            func_01A590();
        }
    }
    func_026A68(s0);
    func_019DC0(7, s0);
    return 1;
}
