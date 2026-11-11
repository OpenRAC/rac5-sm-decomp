/* LEVEL_23:0x0BA260 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001D2400;
extern unsigned int D_001D23FC;
extern int D_001D2390;
extern int D_001D2394;
extern void func_10BA30(void);
extern void func_10B9A0(unsigned int a);
extern void func_09D1B8(void);

void func_0BA260(void)
{
    D_001D2400 = 0;
    if (D_001D23FC != 0xFFFFFFFFU) {
        func_10BA30();
        func_10B9A0(D_001D23FC);
        D_001D23FC = 0xFFFFFFFFU;
    }
    func_09D1B8();
    D_001D2390 = 0;
    D_001D2394 = 0;
}
