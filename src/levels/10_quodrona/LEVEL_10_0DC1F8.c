/* LEVEL_10:0x0DC1F8 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_0020F824;
extern float D_0020F830;
extern int D_0020F838[];
extern int func_0B6040(int a);
extern void func_0A9F98(int a, int b);
extern void func_0AF820(int a, int *r, float f);
extern void func_0AE638(int a, int *r, unsigned int c);
extern void func_0AE4F8(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0DC1F8(void)
{
    int r[4];
    float z;

    if (D_0020F824 != 0) {
        z = 0.0f;
        func_0A9F98(0, func_0B6040(7));
        func_0AF820(D_0020F838[0], r, z);
        func_0AE638(0x2F, r, ((unsigned char)D_0020F824 << 24) | 0xFFFFFF);
        func_0AF820(D_0020F838[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0AE4F8(0x30, r,
                    ((unsigned char)D_0020F824 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0020F824 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0020F824 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0020F824 << 24) | 0xFFFFFF,
                    D_0020F830);
    }
}
