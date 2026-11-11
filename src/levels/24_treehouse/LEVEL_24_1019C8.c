/* LEVEL_24:0x1019C8 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00100DC8[];
extern char D_00100B68[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F920(void *out);

int func_1019C8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, D_00100DC8, 80, 0, -1, D_00100B68);
    return func_08F920(local);
}
