/* LEVEL_04:0x0CC2F0 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0CB878(void);
extern int func_1403F0(void);
extern void func_0AB658(void);
extern void func_0DC5E0(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_0021A180;
extern char D_0021A070;
extern unsigned char D_0021A071;
extern char D_0021A072;
extern int D_0021A074;
extern int D_0021A078;
extern void (*D_0021A07C)(void);
extern void (*D_0021A080)(void);
extern int D_0021A084;
void func_0CC2F0(void)
{
    func_0CB878();
    func_1403F0();
    func_0AB658();
    func_0DC5E0(0);
    D_0021A180 = 0;
    D_0021A070 = 0;
    D_0021A072 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_0021A074 = 0;
    D_0021A078 = 0;
    if (D_0021A071 != 0) {
        if (D_0021A07C != 0)
            D_0021A07C();
    } else {
        if (D_0021A080 != 0)
            D_0021A080();
    }
    D_0021A071 = 0;
    D_0021A07C = 0;
    D_0021A080 = 0;
    D_0021A084 = 0;
}
