/* FRONTEND:0x016B08 -- resets the memory card flow state and runs the pending completion callback. */
extern unsigned char D_00030540;
extern unsigned char D_00030438;
extern unsigned char D_00030439;
extern unsigned char D_0003043A;
extern int D_0003043C;
extern int D_00030440;
extern void (*D_00030444)(void);
extern void (*D_00030448)(void);
extern int D_0003044C;
extern void func_016090(void);
extern int func_0218C8(void);
extern void func_014F18(void);
extern void func_013EC0(int a);
extern void func_0209E0(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int a);

void func_016B08(void)
{
    func_016090();
    func_0218C8();
    func_014F18();
    func_013EC0(0);
    D_00030540 = 0;
    D_00030438 = 0;
    D_0003043A = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_0003043C = 0;
    D_00030440 = 0;
    if (D_00030439 != 0) {
        if (D_00030444 != 0)
            D_00030444();
    } else {
        if (D_00030448 != 0)
            D_00030448();
    }
    D_00030439 = 0;
    D_00030444 = 0;
    D_00030448 = 0;
    D_0003044C = 0;
    func_0209E0(0);
}
