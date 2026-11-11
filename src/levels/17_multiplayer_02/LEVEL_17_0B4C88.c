/* LEVEL_17:0x0B4C88 -- placement copy of LEVEL_01_0C6AD8.c: resets memory card state and runs the pending callback. */
extern void func_0B4210(void);
extern int func_110258(void);
extern void func_094BC0(void);
extern void func_0C5968(int a);
extern void MEMCARD_SetWriteHeaderOnlyMode__Fb(int b);
extern char D_001A2338;
extern char D_001A2228;
extern unsigned char D_001A2229;
extern char D_001A222A;
extern int D_001A222C;
extern int D_001A2230;
extern void (*D_001A2234)(void);
extern void (*D_001A2238)(void);
extern int D_001A223C;
void func_0B4C88(void)
{
    func_0B4210();
    func_110258();
    func_094BC0();
    func_0C5968(0);
    D_001A2338 = 0;
    D_001A2228 = 0;
    D_001A222A = 0;
    MEMCARD_SetWriteHeaderOnlyMode__Fb(0);
    D_001A222C = 0;
    D_001A2230 = 0;
    if (D_001A2229 != 0) {
        if (D_001A2234 != 0)
            D_001A2234();
    } else {
        if (D_001A2238 != 0)
            D_001A2238();
    }
    D_001A2229 = 0;
    D_001A2234 = 0;
    D_001A2238 = 0;
    D_001A223C = 0;
}
