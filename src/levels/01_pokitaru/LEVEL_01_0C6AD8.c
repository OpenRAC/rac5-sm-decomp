/* LEVEL_01:0x0C6AD8 -- resets memory card state and runs the pending callback. */
extern void func_0C6060(void);
extern int func_133F70(void);
extern void func_0A6448(void);
extern void func_0D6D30(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_00200CC0;
extern char D_00200BB0;
extern unsigned char D_00200BB1;
extern char D_00200BB2;
extern int D_00200BB4;
extern int D_00200BB8;
extern void (*D_00200BBC)(void);
extern void (*D_00200BC0)(void);
extern int D_00200BC4;
void func_0C6AD8(void)
{
    func_0C6060();
    func_133F70();
    func_0A6448();
    func_0D6D30(0);
    D_00200CC0 = 0;
    D_00200BB0 = 0;
    D_00200BB2 = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_00200BB4 = 0;
    D_00200BB8 = 0;
    if (D_00200BB1 != 0) {
        if (D_00200BBC != 0)
            D_00200BBC();
    } else {
        if (D_00200BC0 != 0)
            D_00200BC0();
    }
    D_00200BB1 = 0;
    D_00200BBC = 0;
    D_00200BC0 = 0;
    D_00200BC4 = 0;
}
