/* LEVEL_20:0x0C87D8 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_000C7BD8[];
extern char D_000C7978[];
extern void func_074D68(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_074F40(void *out);

int func_0C87D8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_074D68(local, mode | 1u, D_000C7BD8, 80, 0, -1, D_000C7978);
    return func_074F40(local);
}
