/* LEVEL_22:0x0B1970 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_0015E380;
extern unsigned int D_0015E37C;
extern int D_0015E310;
extern int D_0015E314;
extern void func_0F4988(void);
extern void func_0F48F8(unsigned int a);
extern void func_094A58(void);

void func_0B1970(void)
{
    D_0015E380 = 0;
    if (D_0015E37C != 0xFFFFFFFFU) {
        func_0F4988();
        func_0F48F8(D_0015E37C);
        D_0015E37C = 0xFFFFFFFFU;
    }
    func_094A58();
    D_0015E310 = 0;
    D_0015E314 = 0;
}
