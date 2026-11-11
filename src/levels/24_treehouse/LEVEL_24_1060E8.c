/* LEVEL_24:0x1060E8 -- placement copy of LEVEL_01_10F0A8.c. */
extern char D_00105358[];
extern char D_001051E8[];
extern void func_08F748(void *out, unsigned int mode, int data,
                        int size, int first, int second, int extra);
extern void func_08F920(void *out);

void func_1060E8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, (int)D_00105358, 28, 0, -1, (int)D_001051E8);
    func_08F920(local);
}
