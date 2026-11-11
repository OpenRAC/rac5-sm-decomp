/* LEVEL_20:0x0B49E0 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_00116DB4;
extern float D_00116DC0;
extern int D_00116DC8[];
extern int func_08E3C0(int a);
extern void func_081C38(int a, int b);
extern void func_0874F0(int a, int *r, float f);
extern void func_086308(int a, int *r, unsigned int c);
extern void func_0861C8(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0B49E0(void)
{
    int r[4];
    float z;

    if (D_00116DB4 != 0) {
        z = 0.0f;
        func_081C38(0, func_08E3C0(7));
        func_0874F0(D_00116DC8[0], r, z);
        func_086308(0x2F, r, ((unsigned char)D_00116DB4 << 24) | 0xFFFFFF);
        func_0874F0(D_00116DC8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0861C8(0x30, r,
                    ((unsigned char)D_00116DB4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00116DB4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00116DB4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00116DB4 << 24) | 0xFFFFFF,
                    D_00116DC0);
    }
}
