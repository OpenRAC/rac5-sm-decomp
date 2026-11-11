/* LEVEL_01:0x0DADB8 -- draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_00206824;
extern float D_00206830;
extern int D_00206838[];
extern int func_0B4E68(int a);
extern void func_0A8E80(int a, int b);
extern void func_0AE708(int a, int *r, float f);
extern void func_0AD520(int a, int *r, unsigned int c);
extern void func_0AD3E0(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0DADB8(void)
{
    int r[4];
    float z;

    if (D_00206824 != 0) {
        z = 0.0f;
        func_0A8E80(0, func_0B4E68(7));
        func_0AE708(D_00206838[0], r, z);
        func_0AD520(0x2F, r, ((unsigned char)D_00206824 << 24) | 0xFFFFFF);
        func_0AE708(D_00206838[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_0AD3E0(0x30, r,
                    ((unsigned char)D_00206824 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00206824 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00206824 << 24) | 0xFFFFFF,
                    ((unsigned char)D_00206824 << 24) | 0xFFFFFF,
                    D_00206830);
    }
}
