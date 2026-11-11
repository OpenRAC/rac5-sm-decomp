/* LEVEL_10:0x019F28 -- placement copy of LEVEL_01_01A8A8.c: stores a global handle and runs a small mode-dependent sequence. */

extern char *D_001FCFAC;
extern int D_00223780;

int func_01A640(void);
int func_01A650(void);
void func_01A678(void);
void func_026D60(int a0, int a1, int a2);
void func_027508(void *a0);
void func_019EA8(int a0, void *a1);

int func_019F28(int a0, int a1)
{
    char *s0;
    unsigned int r;
    int v;

    s0 = (char *)a0;
    if (a1 != 0) {
        v = D_00223780;
        (*(int *)(D_001FCFAC + 0x1C64)) = v;
    }
    if ((unsigned int)(s0 - 1) < 10) {
        if (func_01A640() != 0) {
            r = (unsigned char)func_01A650();
            func_026D60(0x90, r, 0xFF);
            func_01A678();
        }
    }
    func_027508(s0);
    func_019EA8(7, s0);
    return 1;
}
