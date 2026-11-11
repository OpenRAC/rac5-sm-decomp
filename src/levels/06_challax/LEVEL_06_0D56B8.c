/* LEVEL_06:0x0D56B8 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001F5724;
extern float D_001F5730;
extern int D_001F5738[];
extern int func_0AF6A8(int a);
extern void func_0A3650(int a, int b);
extern void func_0A8ED8(int a, int *r, float f);
extern void func_0A7CF0(int a, int *r, unsigned int c);
extern void func_0A7BB0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0D56B8(void)
{
    int r[4];
    float z;

    if (D_001F5724 != 0) {
        z = 0.0f;
        func_0A3650(0, func_0AF6A8(7));
        func_0A8ED8(D_001F5738[0], r, z);
        func_0A7CF0(0x2F, r, ((unsigned char)D_001F5724 << 24) | 0xFFFFFF);
        func_0A8ED8(D_001F5738[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0A7BB0(0x30, r,
                    ((unsigned char)D_001F5724 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F5724 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F5724 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001F5724 << 24) | 0xFFFFFF,
                    D_001F5730);
    }
}
