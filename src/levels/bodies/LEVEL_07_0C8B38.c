/* LEVEL_07:0x0C8B38 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0C80C0(void);
extern int func_136F70(void);
extern void func_0A8448(void);
extern void func_0D8D90(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00214FC0;
extern char D_00214EB0;
extern unsigned char D_00214EB1;
extern char D_00214EB2;
extern int D_00214EB4;
extern int D_00214EB8;
extern void (*D_00214EBC)(void);
extern void (*D_00214EC0)(void);
extern int D_00214EC4;
void func_0C8B38(void)
{
    func_0C80C0();
    func_136F70();
    func_0A8448();
    func_0D8D90(0);
    D_00214FC0 = 0;
    D_00214EB0 = 0;
    D_00214EB2 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00214EB4 = 0;
    D_00214EB8 = 0;
    if (D_00214EB1 != 0) {
        if (D_00214EBC != 0)
            D_00214EBC();
    } else {
        if (D_00214EC0 != 0)
            D_00214EC0();
    }
    D_00214EB1 = 0;
    D_00214EBC = 0;
    D_00214EC0 = 0;
    D_00214EC4 = 0;
}
