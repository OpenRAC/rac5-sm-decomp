/* LEVEL_09:0x12C000 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_001F0B58;

int func_12BEE0(void);
void func_12C158(void);
int func_12BF78(void);
int func_12BFD0(int a0);
void func_0D46F0(int a0, int a1, int a2);
int func_12BCB0(void);
void func_12BEA8(void);
int func_12BF30(void);
void func_12BF10(void);

void func_12C000(void)
{
    int r;

    if (D_001F0B58 != 0) {
        if (func_12BEE0() != 0) {
            func_12C158();
            r = func_12BFD0(func_12BF78());
            func_0D46F0(2, r, 0x21A);
            if (func_12BF78() == 0x20000) {
                func_12BCB0();
            }
            func_12BEA8();
        } else {
            if (func_12BF30() != 0) {
                func_0D46F0(2, 0xA6D, 0x21A);
                func_12BCB0();
                func_12BF10();
            }
        }
    }
}
