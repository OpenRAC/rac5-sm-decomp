/* LEVEL_10:0x130EC8 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_0020FCB8;

int func_130DA8(void);
void func_131020(void);
int func_130E40(void);
int func_130E98(int a0);
void func_0D8880(int a0, int a1, int a2);
int func_130B78(void);
void func_130D70(void);
int func_130DF8(void);
void func_130DD8(void);

void func_130EC8(void)
{
    int r;

    if (D_0020FCB8 != 0) {
        if (func_130DA8() != 0) {
            func_131020();
            r = func_130E98(func_130E40());
            func_0D8880(2, r, 0x21A);
            if (func_130E40() == 0x20000) {
                func_130B78();
            }
            func_130D70();
        } else {
            if (func_130DF8() != 0) {
                func_0D8880(2, 0xA6D, 0x21A);
                func_130B78();
                func_130DD8();
            }
        }
    }
}
