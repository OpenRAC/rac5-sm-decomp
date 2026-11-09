/* LEVEL_18:0x0B4720 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0B3CA8(void);
extern int func_10F990(void);
extern void func_0946D8(void);
extern void func_0C5400(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001B01B8;
extern char D_001B00A8;
extern unsigned char D_001B00A9;
extern char D_001B00AA;
extern int D_001B00AC;
extern int D_001B00B0;
extern void (*D_001B00B4)(void);
extern void (*D_001B00B8)(void);
extern int D_001B00BC;
void func_0B4720(void)
{
    func_0B3CA8();
    func_10F990();
    func_0946D8();
    func_0C5400(0);
    D_001B01B8 = 0;
    D_001B00A8 = 0;
    D_001B00AA = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001B00AC = 0;
    D_001B00B0 = 0;
    if (D_001B00A9 != 0) {
        if (D_001B00B4 != 0)
            D_001B00B4();
    } else {
        if (D_001B00B8 != 0)
            D_001B00B8();
    }
    D_001B00A9 = 0;
    D_001B00B4 = 0;
    D_001B00B8 = 0;
    D_001B00BC = 0;
}
