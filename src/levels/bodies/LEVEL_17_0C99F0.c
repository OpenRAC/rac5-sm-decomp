/* LEVEL_17:0x0C99F0 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001A7CD4;
extern float D_001A7CE0;
extern int D_001A7CE8[];
extern int func_0A3228(int a);
extern void func_096A38(int a, int b);
extern void func_09C2F0(int a, int *r, float f);
extern void func_09B108(int a, int *r, unsigned int c);
extern void func_09AFC8(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0C99F0(void)
{
    int r[4];
    float z;

    if (D_001A7CD4 != 0) {
        z = 0.0f;
        func_096A38(0, func_0A3228(7));
        func_09C2F0(D_001A7CE8[0], r, z);
        func_09B108(0x2F, r, ((unsigned char)D_001A7CD4 << 24) | 0xFFFFFF);
        func_09C2F0(D_001A7CE8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_09AFC8(0x30, r,
                    ((unsigned char)D_001A7CD4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001A7CD4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001A7CD4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001A7CD4 << 24) | 0xFFFFFF,
                    D_001A7CE0);
    }
}
