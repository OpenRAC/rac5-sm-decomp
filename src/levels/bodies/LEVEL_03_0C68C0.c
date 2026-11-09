/* LEVEL_03:0x0C68C0 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0C5E48(void);
extern int func_132338(void);
extern void func_0A61C8(void);
extern void func_0D6B18(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00219340;
extern char D_00219230;
extern unsigned char D_00219231;
extern char D_00219232;
extern int D_00219234;
extern int D_00219238;
extern void (*D_0021923C)(void);
extern void (*D_00219240)(void);
extern int D_00219244;
void func_0C68C0(void)
{
    func_0C5E48();
    func_132338();
    func_0A61C8();
    func_0D6B18(0);
    D_00219340 = 0;
    D_00219230 = 0;
    D_00219232 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00219234 = 0;
    D_00219238 = 0;
    if (D_00219231 != 0) {
        if (D_0021923C != 0)
            D_0021923C();
    } else {
        if (D_00219240 != 0)
            D_00219240();
    }
    D_00219231 = 0;
    D_0021923C = 0;
    D_00219240 = 0;
    D_00219244 = 0;
}
