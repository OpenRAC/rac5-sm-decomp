/* LEVEL_07:0x136068 -- placement copy of FRONTEND_020A38.c: when a status byte is set, runs a status check and then either a main sequence of helper calls or a shorter fallback sequence. */

extern unsigned char D_0021B358;

int func_135F48(void);
void func_1361C0(void);
int func_135FE0(void);
int func_136038(int a0);
void func_0D94A0(int a0, int a1, int a2);
int func_135D18(void);
void func_135F10(void);
int func_135F98(void);
void func_135F78(void);

void func_136068(void)
{
    int r;

    if (D_0021B358 != 0) {
        if (func_135F48() != 0) {
            func_1361C0();
            r = func_136038(func_135FE0());
            func_0D94A0(2, r, 0x21A);
            if (func_135FE0() == 0x20000) {
                func_135D18();
            }
            func_135F10();
        } else {
            if (func_135F98() != 0) {
                func_0D94A0(2, 0xA6D, 0x21A);
                func_135D18();
                func_135F78();
            }
        }
    }
}
