/* LEVEL_18:0x0B5D10 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001B0104;
extern unsigned char D_001B00A8;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B5D10(int *o)
{
    if (D_001B0104 == 1) {
        func_110A60(o, 8);
    } else if (D_001B00A8 != 0) {
        D_001B010C = 0x1D;
        func_110A60(o, 0x13);
    } else {
        func_110A60(o, 0x1E);
    }
}
