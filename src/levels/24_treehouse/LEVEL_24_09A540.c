/* LEVEL_24:0x09A540 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001C73C8;
extern unsigned int D_001C73CC;
extern int D_001C73C0;
extern long long D_001C73B8;
extern int D_0026AE00[];

long long func_09C318(void);

void func_09A540(unsigned int a0)
{
    long long r;

    D_001C73C8 = a0;
    if (D_001C73CC < a0) {
        D_001C73CC = a0;
    }
    r = func_09C318();
    D_0026AE00[D_001C73C0 & 0x1F] = (int)(r - D_001C73B8);
}
