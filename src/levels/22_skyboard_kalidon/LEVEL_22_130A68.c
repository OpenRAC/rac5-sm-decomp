/* LEVEL_22:0x130A68 -- watches two buttons and fires a handler when a press repeats inside a short frame window. */

extern unsigned int D_001668B8;
extern int D_001668BC;
extern unsigned int D_001668C0;

extern unsigned int func_0793A0(int a0);
extern void func_130C48(int arg);
extern void func_130A30(void *a0);

void func_130A68(void *a0)
{
    unsigned int pad;

    pad = func_0793A0(0x10);
    if (pad & 0x10) {
        if (D_001668BC != 0x10) {
            D_001668BC = 0x10;
            D_001668B8 = D_001668C0;
        } else if (D_001668B8 < D_001668C0 - 5 && D_001668C0 - 0x1E < D_001668B8) {
            func_130C48((int)a0);
            D_001668B8 = 0;
            D_001668BC = 0;
        } else {
            D_001668B8 = D_001668C0;
        }
    }
    if (pad & 0x40) {
        if (D_001668BC != 0x40) {
            D_001668BC = 0x40;
            D_001668B8 = D_001668C0;
        } else if (D_001668B8 < D_001668C0 - 5 && D_001668C0 - 0x1E < D_001668B8) {
            func_130A30(a0);
            D_001668B8 = 0;
            D_001668BC = 0;
        } else {
            D_001668B8 = D_001668C0;
        }
    }
    D_001668C0 = D_001668C0 + 1;
}
