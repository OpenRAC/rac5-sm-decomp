/* LEVEL_23:0x17D748 -- placement copy of LEVEL_22_130A68.c: watches two buttons and fires a handler when a press repeats inside a short frame window. */

extern unsigned int D_001DBE38;
extern int D_001DBE3C;
extern unsigned int D_001DBE40;

extern unsigned int func_07DE48(int a0);
extern void func_17D928(int arg);
extern void func_17D710(void *a0);

void func_17D748(void *a0)
{
    unsigned int pad;

    pad = func_07DE48(0x10);
    if (pad & 0x10) {
        if (D_001DBE3C != 0x10) {
            D_001DBE3C = 0x10;
            D_001DBE38 = D_001DBE40;
        } else if (D_001DBE38 < D_001DBE40 - 5 && D_001DBE40 - 0x1E < D_001DBE38) {
            func_17D928((int)a0);
            D_001DBE38 = 0;
            D_001DBE3C = 0;
        } else {
            D_001DBE38 = D_001DBE40;
        }
    }
    if (pad & 0x40) {
        if (D_001DBE3C != 0x40) {
            D_001DBE3C = 0x40;
            D_001DBE38 = D_001DBE40;
        } else if (D_001DBE38 < D_001DBE40 - 5 && D_001DBE40 - 0x1E < D_001DBE38) {
            func_17D710(a0);
            D_001DBE38 = 0;
            D_001DBE3C = 0;
        } else {
            D_001DBE38 = D_001DBE40;
        }
    }
    D_001DBE40 = D_001DBE40 + 1;
}
