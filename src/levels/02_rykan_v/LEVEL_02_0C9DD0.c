/* LEVEL_02:0x0C9DD0 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_00213FC0;
extern unsigned int D_00213FBC;
extern int D_00213F50;
extern int D_00213F54;
extern void func_120810(void);
extern void func_120780(unsigned int a);
extern void func_0ACD58(void);

void func_0C9DD0(void)
{
    D_00213FC0 = 0;
    if (D_00213FBC != 0xFFFFFFFFU) {
        func_120810();
        func_120780(D_00213FBC);
        D_00213FBC = 0xFFFFFFFFU;
    }
    func_0ACD58();
    D_00213F50 = 0;
    D_00213F54 = 0;
}
