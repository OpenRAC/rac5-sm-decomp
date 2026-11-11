/* LEVEL_09:0x0C0770 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_001E8E00;
extern unsigned int D_001E8DFC;
extern int D_001E8D90;
extern int D_001E8D94;
extern void func_1138B8(void);
extern void func_113828(unsigned int a);
extern void func_0A36F8(void);

void func_0C0770(void)
{
    D_001E8E00 = 0;
    if (D_001E8DFC != 0xFFFFFFFFU) {
        func_1138B8();
        func_113828(D_001E8DFC);
        D_001E8DFC = 0xFFFFFFFFU;
    }
    func_0A36F8();
    D_001E8D90 = 0;
    D_001E8D94 = 0;
}
