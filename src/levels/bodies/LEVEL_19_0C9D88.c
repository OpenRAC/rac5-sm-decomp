/* LEVEL_19:0x0C9D88 -- placement copy of LEVEL_01_0DADB8.c: draws a tinted outlined rectangle for the overlay when it is enabled. */
extern unsigned int D_001B5854;
extern float D_001B5860;
extern int D_001B5868[];
extern int func_0A35C0(int a);
extern void func_096DD0(int a, int b);
extern void func_09C688(int a, int *r, float f);
extern void func_09B4A0(int a, int *r, unsigned int c);
extern void func_09B360(int a, int *r, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float f);

void func_0C9D88(void)
{
    int r[4];
    float z;

    if (D_001B5854 != 0) {
        z = 0.0f;
        func_096DD0(0, func_0A35C0(7));
        func_09C688(D_001B5868[0], r, z);
        func_09B4A0(0x2F, r, ((unsigned char)D_001B5854 << 24) | 0xFFFFFF);
        func_09C688(D_001B5868[1], r, z);
        r[1]--;
        r[0]--;
        r[2]++;
        r[3]++;
        func_09B360(0x30, r,
                    ((unsigned char)D_001B5854 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B5854 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B5854 << 24) | 0xFFFFFF,
                    ((unsigned char)D_001B5854 << 24) | 0xFFFFFF,
                    D_001B5860);
    }
}
