/* LEVEL_19:0x0B5020 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0B45A8(void);
extern int func_111380(void);
extern void func_094F58(void);
extern void func_0C5D00(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001AFEB8;
extern char D_001AFDA8;
extern unsigned char D_001AFDA9;
extern char D_001AFDAA;
extern int D_001AFDAC;
extern int D_001AFDB0;
extern void (*D_001AFDB4)(void);
extern void (*D_001AFDB8)(void);
extern int D_001AFDBC;
void func_0B5020(void)
{
    func_0B45A8();
    func_111380();
    func_094F58();
    func_0C5D00(0);
    D_001AFEB8 = 0;
    D_001AFDA8 = 0;
    D_001AFDAA = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001AFDAC = 0;
    D_001AFDB0 = 0;
    if (D_001AFDA9 != 0) {
        if (D_001AFDB4 != 0)
            D_001AFDB4();
    } else {
        if (D_001AFDB8 != 0)
            D_001AFDB8();
    }
    D_001AFDA9 = 0;
    D_001AFDB4 = 0;
    D_001AFDB8 = 0;
    D_001AFDBC = 0;
}
