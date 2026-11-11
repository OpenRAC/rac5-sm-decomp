/* LEVEL_18:0x0B59A8 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_001B0104;
extern unsigned char D_001B00A8;
extern int D_001B010C;
extern void func_110A60(int *p, int a1);

void func_0B59A8(int *p)
{
    if (D_001B0104 == 1) {
        func_110A60(p, 10);
    } else if (D_001B00A8 != 0) {
        D_001B010C = 0x1D;
        func_110A60(p, 0x13);
    } else {
        func_110A60(p, 0x1E);
    }
}
