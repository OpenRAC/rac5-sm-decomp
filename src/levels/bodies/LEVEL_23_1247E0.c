/* LEVEL_23:0x1247E0 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_001DA458;

int func_1246C0(void);
void func_124938(void);
int func_124758(void);
int func_1247B0(int a0);
void func_0CE270(int a0, int a1, int a2);
int func_124490(void);
void func_124688(void);
int func_124710(void);
void func_1246F0(void);

void func_1247E0(void)
{
    int r;

    if (D_001DA458 != 0) {
        if (func_1246C0() != 0) {
            func_124938();
            r = func_1247B0(func_124758());
            func_0CE270(2, r, 0x21A);
            if (func_124758() == 0x20000) {
                func_124490();
            }
            func_124688();
        } else {
            if (func_124710() != 0) {
                func_0CE270(2, 0xA6D, 0x21A);
                func_124490();
                func_1246F0();
            }
        }
    }
}
