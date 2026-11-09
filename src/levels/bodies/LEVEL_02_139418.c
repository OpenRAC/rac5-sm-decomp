/* LEVEL_02:0x139418 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_0021C018;

int func_1392F8(void);
void func_139570(void);
int func_139390(void);
int func_1393E8(int a0);
void func_0DDDD0(int a0, int a1, int a2);
int func_1390C8(void);
void func_1392C0(void);
int func_139348(void);
void func_139328(void);

void func_139418(void)
{
    int r;

    if (D_0021C018 != 0) {
        if (func_1392F8() != 0) {
            func_139570();
            r = func_1393E8(func_139390());
            func_0DDDD0(2, r, 0x21A);
            if (func_139390() == 0x20000) {
                func_1390C8();
            }
            func_1392C0();
        } else {
            if (func_139348() != 0) {
                func_0DDDD0(2, 0xA6D, 0x21A);
                func_1390C8();
                func_139328();
            }
        }
    }
}
