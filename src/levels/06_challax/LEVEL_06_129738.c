/* LEVEL_06:0x129738 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_001F5C58;

int func_129618(void);
void func_129890(void);
int func_1296B0(void);
int func_129708(int a0);
int func_0D1D40(int a0, int a1, int a2);
int func_1293E8(void);
void func_1295E0(void);
int func_129668(void);
void func_129648(void);

void func_129738(void)
{
    int r;

    if (D_001F5C58 != 0) {
        if (func_129618() != 0) {
            func_129890();
            r = func_129708(func_1296B0());
            func_0D1D40(2, r, 0x21A);
            if (func_1296B0() == 0x20000) {
                func_1293E8();
            }
            func_1295E0();
        } else {
            if (func_129668() != 0) {
                func_0D1D40(2, 0xA6D, 0x21A);
                func_1293E8();
                func_129648();
            }
        }
    }
}
