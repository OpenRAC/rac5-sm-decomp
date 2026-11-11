/* LEVEL_15:0x0F1F30 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_0015B9B8;

int func_0F1E10(void);
void func_0F2088(void);
int func_0F1EA8(void);
int func_0F1F00(int a0);
int func_0B7A80(int a0, int a1, int a2);
int func_0F1BE0(void);
void func_0F1DD8(void);
int func_0F1E60(void);
void func_0F1E40(void);

void func_0F1F30(void)
{
    int r;

    if (D_0015B9B8 != 0) {
        if (func_0F1E10() != 0) {
            func_0F2088();
            r = func_0F1F00(func_0F1EA8());
            func_0B7A80(2, r, 0x21A);
            if (func_0F1EA8() == 0x20000) {
                func_0F1BE0();
            }
            func_0F1DD8();
        } else {
            if (func_0F1E60() != 0) {
                func_0B7A80(2, 0xA6D, 0x21A);
                func_0F1BE0();
                func_0F1E40();
            }
        }
    }
}
