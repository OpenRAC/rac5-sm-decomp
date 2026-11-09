/* LEVEL_08:0x1445A0 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_0024FF18;

int func_144480(void);
void func_1446F8(void);
int func_144518(void);
int func_144570(int a0);
void func_0E2410(int a0, int a1, int a2);
int func_144250(void);
void func_144448(void);
int func_1444D0(void);
void func_1444B0(void);

void func_1445A0(void)
{
    int r;

    if (D_0024FF18 != 0) {
        if (func_144480() != 0) {
            func_1446F8();
            r = func_144570(func_144518());
            func_0E2410(2, r, 0x21A);
            if (func_144518() == 0x20000) {
                func_144250();
            }
            func_144448();
        } else {
            if (func_1444D0() != 0) {
                func_0E2410(2, 0xA6D, 0x21A);
                func_144250();
                func_1444B0();
            }
        }
    }
}
