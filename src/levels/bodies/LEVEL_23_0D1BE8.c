/* LEVEL_23:0x0D1BE8 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001D9C24;
extern float D_001D9C30;
extern int D_001D9C38[];
extern int func_0ABC48(int a);
extern void func_09FBF0(int a, int b);
extern void func_0A5478(int a, int *r, float f);
extern void func_0A4290(int a, int *r, unsigned int c);
extern void func_0A4150(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0D1BE8(void)
{
    int r[4];
    float z;

    if (D_001D9C24 != 0) {
        z = 0.0f;
        func_09FBF0(0, func_0ABC48(7));
        func_0A5478(D_001D9C38[0], r, z);
        func_0A4290(0x2F, r, ((unsigned char)D_001D9C24 << 24) | 0xFFFFFF);
        func_0A5478(D_001D9C38[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0A4150(0x30, r,
                    ((unsigned char)D_001D9C24 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001D9C24 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001D9C24 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001D9C24 << 24) | 0xFFFFFF,
                    D_001D9C30);
    }
}
