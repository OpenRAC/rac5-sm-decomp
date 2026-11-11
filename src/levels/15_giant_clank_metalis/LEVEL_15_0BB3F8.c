/* LEVEL_15:0x0BB3F8 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_0015B4A4;
extern float D_0015B4B0;
extern int D_0015B4B8[];
extern int func_095420(int a);
extern void func_089748(int a, int b);
extern void func_08EFD0(int a, int *r, float f);
extern void func_08DDE8(int a, int *r, unsigned int c);
extern void func_08DCA8(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0BB3F8(void)
{
    int r[4];
    float z;

    if (D_0015B4A4 != 0) {
        z = 0.0f;
        func_089748(0, func_095420(7));
        func_08EFD0(D_0015B4B8[0], r, z);
        func_08DDE8(0x2F, r, ((unsigned char)D_0015B4A4 << 24) | 0xFFFFFF);
        func_08EFD0(D_0015B4B8[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_08DCA8(0x30, r,
                    ((unsigned char)D_0015B4A4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0015B4A4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0015B4A4 << 24) | 0xFFFFFF,
                    ((unsigned char)D_0015B4A4 << 24) | 0xFFFFFF,
                    D_0015B4B0);
    }
}
