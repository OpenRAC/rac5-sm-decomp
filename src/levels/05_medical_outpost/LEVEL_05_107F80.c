/* LEVEL_05:0x107F80 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00107380[];
extern char D_00107120[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_094218(void *out);

int func_107F80(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode | 1u, D_00107380, 80, 0, -1, D_00107120);
    return func_094218(local);
}
