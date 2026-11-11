/* LEVEL_16:0x0B5748 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0B4CD0(void);
extern int func_110CE0(void);
extern void func_0956C8(void);
extern void func_0C6428(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001AED38;
extern char D_001AEC28;
extern unsigned char D_001AEC29;
extern char D_001AEC2A;
extern int D_001AEC2C;
extern int D_001AEC30;
extern void (*D_001AEC34)(void);
extern void (*D_001AEC38)(void);
extern int D_001AEC3C;
void func_0B5748(void)
{
    func_0B4CD0();
    func_110CE0();
    func_0956C8();
    func_0C6428(0);
    D_001AED38 = 0;
    D_001AEC28 = 0;
    D_001AEC2A = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001AEC2C = 0;
    D_001AEC30 = 0;
    if (D_001AEC29 != 0) {
        if (D_001AEC34 != 0)
            D_001AEC34();
    } else {
        if (D_001AEC38 != 0)
            D_001AEC38();
    }
    D_001AEC29 = 0;
    D_001AEC34 = 0;
    D_001AEC38 = 0;
    D_001AEC3C = 0;
}
