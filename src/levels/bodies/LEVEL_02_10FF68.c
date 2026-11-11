/* LEVEL_02:0x10FF68 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_0010F368[];
extern char D_0010F108[];
extern void func_09D018(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09D1F0(void *out);

int func_10FF68(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09D018(local, mode | 1u, D_0010F368, 80, 0, -1, D_0010F108);
    return func_09D1F0(local);
}
