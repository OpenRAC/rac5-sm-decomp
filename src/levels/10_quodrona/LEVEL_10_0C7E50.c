/* LEVEL_10:0x0C7E50 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0C73D8(void);
extern int func_131DF0(void);
extern void func_0A7560(void);
extern void func_0D8170(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00209CC0;
extern char D_00209BB0;
extern unsigned char D_00209BB1;
extern char D_00209BB2;
extern int D_00209BB4;
extern int D_00209BB8;
extern void (*D_00209BBC)(void);
extern void (*D_00209BC0)(void);
extern int D_00209BC4;
void func_0C7E50(void)
{
    func_0C73D8();
    func_131DF0();
    func_0A7560();
    func_0D8170(0);
    D_00209CC0 = 0;
    D_00209BB0 = 0;
    D_00209BB2 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00209BB4 = 0;
    D_00209BB8 = 0;
    if (D_00209BB1 != 0) {
        if (D_00209BBC != 0)
            D_00209BBC();
    } else {
        if (D_00209BC0 != 0)
            D_00209BC0();
    }
    D_00209BB1 = 0;
    D_00209BBC = 0;
    D_00209BC0 = 0;
    D_00209BC4 = 0;
}
