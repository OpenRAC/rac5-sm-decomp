/* LEVEL_24:0x1028E8 -- placement copy of LEVEL_01_10B8A8.c. */
extern char D_00102110[];
extern char D_00101F50[];
extern void func_08F748(unsigned int *out, unsigned int mode, unsigned int data,
                        int size, int first, int second, unsigned int extra);
extern void func_08F920(unsigned int *out);

void func_1028E8(unsigned int value) {
    unsigned int local[4];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, (unsigned int)D_00102110, 64, 0, -1, (unsigned int)D_00101F50);
    func_08F920(local);
}
