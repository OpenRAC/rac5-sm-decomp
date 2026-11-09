/* LEVEL_02:0x0CD3E8 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0CC970(void);
extern int func_13A320(void);
extern void func_0ACD58(void);
extern void func_0DD6C0(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00215C80;
extern char D_00215B70;
extern unsigned char D_00215B71;
extern char D_00215B72;
extern int D_00215B74;
extern int D_00215B78;
extern void (*D_00215B7C)(void);
extern void (*D_00215B80)(void);
extern int D_00215B84;
void func_0CD3E8(void)
{
    func_0CC970();
    func_13A320();
    func_0ACD58();
    func_0DD6C0(0);
    D_00215C80 = 0;
    D_00215B70 = 0;
    D_00215B72 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00215B74 = 0;
    D_00215B78 = 0;
    if (D_00215B71 != 0) {
        if (D_00215B7C != 0)
            D_00215B7C();
    } else {
        if (D_00215B80 != 0)
            D_00215B80();
    }
    D_00215B71 = 0;
    D_00215B7C = 0;
    D_00215B80 = 0;
    D_00215B84 = 0;
}
