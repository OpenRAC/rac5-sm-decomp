/* LEVEL_16:0x113480 -- runs a short shutdown sequence when a pending flag is set, then clears a status byte. */

extern int D_001B4C24;
extern unsigned char D_001B4C30;

void func_033D88(void);
void func_1168B8(void);
void func_118D48(void);

void func_113480(void)
{
    if (D_001B4C24 == 1) {
        func_033D88();
        D_001B4C24 = 0;
        func_1168B8();
        func_118D48();
    }
    D_001B4C30 = 0;
}
