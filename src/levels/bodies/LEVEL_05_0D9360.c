/* LEVEL_05:0x0D9360 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001F5BA4;
extern float D_001F5BB0;
extern int D_001F5BB8[];
extern int func_0B3428(int a);
extern void func_0A7440(int a, int b);
extern void func_0ACCC8(int a, int *r, float f);
extern void func_0ABAE0(int a, int *r, unsigned int c);
extern void func_0AB9A0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0D9360(void)
{
    int r[4];
    float z;

    if (D_001F5BA4 != 0) {
        z = 0.0f;
        func_0A7440(0, func_0B3428(7));
        func_0ACCC8(D_001F5BB8[0], r, z);
        func_0ABAE0(0x2F, r, ((unsigned char)D_001F5BA4 << 24) | 0xFFFFFF);
        func_0ACCC8(D_001F5BB8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0AB9A0(0x30, r,
                    ((unsigned char)D_001F5BA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F5BA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F5BA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F5BA4 << 24) | 0xFFFFFF,
                    D_001F5BB0);
    }
}
