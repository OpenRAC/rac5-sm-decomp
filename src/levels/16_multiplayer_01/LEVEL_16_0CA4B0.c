/* LEVEL_16:0x0CA4B0 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001B46D4;
extern float D_001B46E0;
extern int D_001B46E8[];
extern int func_0A3D48(int a);
extern void func_097540(int a, int b);
extern void func_09CDF8(int a, int *r, float f);
extern void func_09BC10(int a, int *r, unsigned int c);
extern void func_09BAD0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0CA4B0(void)
{
    int r[4];
    float z;

    if (D_001B46D4 != 0) {
        z = 0.0f;
        func_097540(0, func_0A3D48(7));
        func_09CDF8(D_001B46E8[0], r, z);
        func_09BC10(0x2F, r, ((unsigned char)D_001B46D4 << 24) | 0xFFFFFF);
        func_09CDF8(D_001B46E8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_09BAD0(0x30, r,
                    ((unsigned char)D_001B46D4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B46D4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B46D4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B46D4 << 24) | 0xFFFFFF,
                    D_001B46E0);
    }
}
