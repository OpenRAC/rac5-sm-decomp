/* LEVEL_05:0x184710 -- fills the 150-entry colour table with random bright colours (each channel 150..254, alpha 0xFF) and looks up the two registered values. */
extern int rand(void);
extern unsigned int D_0038E048[];
extern int D_001F7730;
extern int D_001F771C;
extern int func_1259E0(unsigned int value);

void func_184710(void)
{
    unsigned int i;
    unsigned int r;
    unsigned int g;
    unsigned int b;
    unsigned int gg;

    for (i = 0; i < 150; i++) {
        r = (rand() % 105 + 150) & 0xFF;
        g = (rand() % 105 + 150) & 0xFF;
        b = (rand() % 105 + 150) & 0xFF;
        gg = (g << 8) | 0xFF000000u;
        D_0038E048[i] = ((b << 16) | gg) | r;
    }
    D_001F7730 = func_1259E0(0x184F0ED6u);
    D_001F771C = func_1259E0(0x4C41081Bu);
}
