/* LEVEL_24:0x0D4720 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001D74A4;
extern float D_001D74B0;
extern int D_001D74B8[];
extern int func_0AE6E0(int a);
extern void func_0A26F8(int a, int b);
extern void func_0A7F80(int a, int *r, float f);
extern void func_0A6D98(int a, int *r, unsigned int c);
extern void func_0A6C58(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0D4720(void)
{
    int r[4];
    float z;

    if (D_001D74A4 != 0) {
        z = 0.0f;
        func_0A26F8(0, func_0AE6E0(7));
        func_0A7F80(D_001D74B8[0], r, z);
        func_0A6D98(0x2F, r, ((unsigned char)D_001D74A4 << 24) | 0xFFFFFF);
        func_0A7F80(D_001D74B8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0A6C58(0x30, r,
                    ((unsigned char)D_001D74A4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001D74A4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001D74A4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001D74A4 << 24) | 0xFFFFFF,
                    D_001D74B0);
    }
}
