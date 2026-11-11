/* LEVEL_09:0x0D8068 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001F0624;
extern float D_001F0630;
extern int D_001F0638[];
extern int func_0B2118(int a);
extern void func_0A6130(int a, int b);
extern void func_0AB9B8(int a, int *r, float f);
extern void func_0AA7D0(int a, int *r, unsigned int c);
extern void func_0AA690(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0D8068(void)
{
    int r[4];
    float z;

    if (D_001F0624 != 0) {
        z = 0.0f;
        func_0A6130(0, func_0B2118(7));
        func_0AB9B8(D_001F0638[0], r, z);
        func_0AA7D0(0x2F, r, ((unsigned char)D_001F0624 << 24) | 0xFFFFFF);
        func_0AB9B8(D_001F0638[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0AA690(0x30, r,
                    ((unsigned char)D_001F0624 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F0624 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F0624 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F0624 << 24) | 0xFFFFFF,
                    D_001F0630);
    }
}
