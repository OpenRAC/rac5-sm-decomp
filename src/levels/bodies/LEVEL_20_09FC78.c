/* LEVEL_20:0x09FC78 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_09F200(void);
extern int func_0E3AC8(void);
extern void func_07FDC0(void);
extern void func_0B0958(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00111418;
extern char D_00111308;
extern unsigned char D_00111309;
extern char D_0011130A;
extern int D_0011130C;
extern int D_00111310;
extern void (*D_00111314)(void);
extern void (*D_00111318)(void);
extern int D_0011131C;
void func_09FC78(void)
{
    func_09F200();
    func_0E3AC8();
    func_07FDC0();
    func_0B0958(0);
    D_00111418 = 0;
    D_00111308 = 0;
    D_0011130A = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_0011130C = 0;
    D_00111310 = 0;
    if (D_00111309 != 0) {
        if (D_00111314 != 0)
            D_00111314();
    } else {
        if (D_00111318 != 0)
            D_00111318();
    }
    D_00111309 = 0;
    D_00111314 = 0;
    D_00111318 = 0;
    D_0011131C = 0;
}
