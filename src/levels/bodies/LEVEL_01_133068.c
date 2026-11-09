/* LEVEL_01:0x133068 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_00207058;

int func_132F48(void);
void func_1331C0(void);
int func_132FE0(void);
int func_133038(int a0);
void func_0D7440(int a0, int a1, int a2);
int func_132D18(void);
void func_132F10(void);
int func_132F98(void);
void func_132F78(void);

void func_133068(void)
{
    int r;

    if (D_00207058 != 0) {
        if (func_132F48() != 0) {
            func_1331C0();
            r = func_133038(func_132FE0());
            func_0D7440(2, r, 0x21A);
            if (func_132FE0() == 0x20000) {
                func_132D18();
            }
            func_132F10();
        } else {
            if (func_132F98() != 0) {
                func_0D7440(2, 0xA6D, 0x21A);
                func_132D18();
                func_132F78();
            }
        }
    }
}
