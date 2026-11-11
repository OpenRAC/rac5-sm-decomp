/* LEVEL_22:0x016EC0 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_0015332C;
extern int D_00177C70;

int func_0175D8(void);
int func_0175E8(void);
void func_017610(void);
void func_021E10(int a0, int a1, int a2);
void func_0225B8(void *a0);
void func_016E40(int a0, void *a1);

int func_016EC0(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_00177C70;
        (*(int *)(D_0015332C + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_0175D8() != 0) {
            r = (unsigned char)func_0175E8();
            func_021E10(0x90, r, 0xFF);
            func_017610();
        }
    }
    func_0225B8(s0);
    func_016E40(7, s0);
    return 1;
}
