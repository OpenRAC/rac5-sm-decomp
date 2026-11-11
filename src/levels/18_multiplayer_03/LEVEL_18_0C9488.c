/* LEVEL_18:0x0C9488 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001B5B54;
extern float D_001B5B60;
extern int D_001B5B68[];
extern int func_0A2D40(int a);
extern void func_096550(int a, int b);
extern void func_09BE08(int a, int *r, float f);
extern void func_09AC20(int a, int *r, unsigned int c);
extern void func_09AAE0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0C9488(void)
{
    int r[4];
    float z;

    if (D_001B5B54 != 0) {
        z = 0.0f;
        func_096550(0, func_0A2D40(7));
        func_09BE08(D_001B5B68[0], r, z);
        func_09AC20(0x2F, r, ((unsigned char)D_001B5B54 << 24) | 0xFFFFFF);
        func_09BE08(D_001B5B68[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_09AAE0(0x30, r,
                    ((unsigned char)D_001B5B54 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B5B54 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B5B54 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B5B54 << 24) | 0xFFFFFF,
                    D_001B5B60);
    }
}
