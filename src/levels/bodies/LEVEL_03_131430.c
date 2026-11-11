/* LEVEL_03:0x131430 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_0021F6D8;

int func_131310(void);
void func_131588(void);
int func_1313A8(void);
int func_131400(int a0);
int func_0D7228(int a0, int a1, int a2);
int func_1310E0(void);
void func_1312D8(void);
int func_131360(void);
void func_131340(void);

void func_131430(void)
{
    int r;

    if (D_0021F6D8 != 0) {
        if (func_131310() != 0) {
            func_131588();
            r = func_131400(func_1313A8());
            func_0D7228(2, r, 0x21A);
            if (func_1313A8() == 0x20000) {
                func_1310E0();
            }
            func_1312D8();
        } else {
            if (func_131360() != 0) {
                func_0D7228(2, 0xA6D, 0x21A);
                func_1310E0();
                func_131340();
            }
        }
    }
}
