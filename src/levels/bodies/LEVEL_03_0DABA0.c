/* LEVEL_03:0x0DABA0 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_0021EEA4;
extern float D_0021EEB0;
extern int D_0021EEB8[];
extern int func_0B4C50(int a);
extern void func_0A8C00(int a, int b);
extern void func_0AE488(int a, int *r, float f);
extern void func_0AD2A0(int a, int *r, unsigned int c);
extern void func_0AD160(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0DABA0(void)
{
    int r[4];
    float z;

    if (D_0021EEA4 != 0) {
        z = 0.0f;
        func_0A8C00(0, func_0B4C50(7));
        func_0AE488(D_0021EEB8[0], r, z);
        func_0AD2A0(0x2F, r, ((unsigned char)D_0021EEA4 << 24) | 0xFFFFFF);
        func_0AE488(D_0021EEB8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0AD160(0x30, r,
                    ((unsigned char)D_0021EEA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021EEA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021EEA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021EEA4 << 24) | 0xFFFFFF,
                    D_0021EEB0);
    }
}
