/* LEVEL_24:0x0F6E68 -- placement copy of LEVEL_01_0FF258.c. */
extern char D_000F66E8[];
extern char D_000F6578[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F920(void *out);

int func_0F6E68(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode, D_000F66E8, 48, 0, -1, D_000F6578);
    return func_08F920(local);
}
