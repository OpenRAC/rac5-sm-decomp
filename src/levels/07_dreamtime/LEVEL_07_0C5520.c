/* LEVEL_07:0x0C5520 -- placement copy of LEVEL_01_0C34C0.c: clears a flag byte, runs two helpers when a cached handle is set, then clears two words. */

extern unsigned char D_00213300;
extern unsigned int D_002132FC;
extern int D_00213290;
extern int D_00213294;
extern void func_11D518(void);
extern void func_11D488(unsigned int a);
extern void func_0A8448(void);

void func_0C5520(void)
{
    D_00213300 = 0;
    if (D_002132FC != 0xFFFFFFFFU) {
        func_11D518();
        func_11D488(D_002132FC);
        D_002132FC = 0xFFFFFFFFU;
    }
    func_0A8448();
    D_00213290 = 0;
    D_00213294 = 0;
}
