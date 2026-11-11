/* LEVEL_03:0x108650 -- placement copy of LEVEL_01_109DB8.c. */
extern char D_00107A50[];
extern char D_001077F0[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096750(void *out);

int func_108650(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode | 1u, D_00107A50, 80, 0, -1, D_001077F0);
    return func_096750(local);
}
