/* LEVEL_04:0x0E0678 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_0021FCE4;
extern float D_0021FCF0;
extern int D_0021FCF8[];
extern int func_0BA558(int a);
extern void func_0AE0D0(int a, int b);
extern void func_0B3958(int a, int *r, float f);
extern void func_0B2770(int a, int *r, unsigned int c);
extern void func_0B2630(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0E0678(void)
{
    int r[4];
    float z;

    if (D_0021FCE4 != 0) {
        z = 0.0f;
        func_0AE0D0(0, func_0BA558(7));
        func_0B3958(D_0021FCF8[0], r, z);
        func_0B2770(0x2F, r, ((unsigned char)D_0021FCE4 << 24) | 0xFFFFFF);
        func_0B3958(D_0021FCF8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0B2630(0x30, r,
                    ((unsigned char)D_0021FCE4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021FCE4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021FCE4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021FCE4 << 24) | 0xFFFFFF,
                    D_0021FCF0);
    }
}
