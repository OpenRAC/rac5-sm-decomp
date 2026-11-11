/* LEVEL_22:0x0C92F8 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_00165BA4;
extern float D_00165BB0;
extern int D_00165BB8[];
extern int func_0A3460(int a);
extern void func_097490(int a, int b);
extern void func_09CD18(int a, int *r, float f);
extern void func_09BB30(int a, int *r, unsigned int c);
extern void func_09B9F0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0C92F8(void)
{
    int r[4];
    float z;

    if (D_00165BA4 != 0) {
        z = 0.0f;
        func_097490(0, func_0A3460(7));
        func_09CD18(D_00165BB8[0], r, z);
        func_09BB30(0x2F, r, ((unsigned char)D_00165BA4 << 24) | 0xFFFFFF);
        func_09CD18(D_00165BB8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_09B9F0(0x30, r,
                    ((unsigned char)D_00165BA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00165BA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00165BA4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00165BA4 << 24) | 0xFFFFFF,
                    D_00165BB0);
    }
}
