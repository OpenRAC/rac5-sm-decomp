/* LEVEL_08:0x0E5D88 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_0024F6E4;
extern float D_0024F6F0;
extern int D_0024F6F8[];
extern int func_0BFC40(int a);
extern void func_0B37B8(int a, int b);
extern void func_0B9040(int a, int *r, float f);
extern void func_0B7E58(int a, int *r, unsigned int c);
extern void func_0B7D18(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0E5D88(void)
{
    int r[4];
    float z;

    if (D_0024F6E4 != 0) {
        z = 0.0f;
        func_0B37B8(0, func_0BFC40(7));
        func_0B9040(D_0024F6F8[0], r, z);
        func_0B7E58(0x2F, r, ((unsigned char)D_0024F6E4 << 24) | 0xFFFFFF);
        func_0B9040(D_0024F6F8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0B7D18(0x30, r,
                    ((unsigned char)D_0024F6E4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0024F6E4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0024F6E4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0024F6E4 << 24) | 0xFFFFFF,
                    D_0024F6F0);
    }
}
