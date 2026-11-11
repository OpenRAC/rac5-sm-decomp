/* LEVEL_07:0x0DCE18 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_0021AB24;
extern float D_0021AB30;
extern int D_0021AB38[];
extern int func_0B6EC8(int a);
extern void func_0AAE80(int a, int b);
extern void func_0B0708(int a, int *r, float f);
extern void func_0AF520(int a, int *r, unsigned int c);
extern void func_0AF3E0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0DCE18(void)
{
    int r[4];
    float z;

    if (D_0021AB24 != 0) {
        z = 0.0f;
        func_0AAE80(0, func_0B6EC8(7));
        func_0B0708(D_0021AB38[0], r, z);
        func_0AF520(0x2F, r, ((unsigned char)D_0021AB24 << 24) | 0xFFFFFF);
        func_0B0708(D_0021AB38[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0AF3E0(0x30, r,
                    ((unsigned char)D_0021AB24 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021AB24 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021AB24 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0021AB24 << 24) | 0xFFFFFF,
                    D_0021AB30);
    }
}
