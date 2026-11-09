/* LEVEL_05:0x12E9E0 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_001F60D8;

int func_12E8C0(void);
void func_12EB38(void);
int func_12E958(void);
int func_12E9B0(int a0);
void func_0D59E8(int a0, int a1, int a2);
int func_12E690(void);
void func_12E888(void);
int func_12E910(void);
void func_12E8F0(void);

void func_12E9E0(void)
{
    int r;

    if (D_001F60D8 != 0) {
        if (func_12E8C0() != 0) {
            func_12EB38();
            r = func_12E9B0(func_12E958());
            func_0D59E8(2, r, 0x21A);
            if (func_12E958() == 0x20000) {
                func_12E690();
            }
            func_12E888();
        } else {
            if (func_12E910() != 0) {
                func_0D59E8(2, 0xA6D, 0x21A);
                func_12E690();
                func_12E8F0();
            }
        }
    }
}
