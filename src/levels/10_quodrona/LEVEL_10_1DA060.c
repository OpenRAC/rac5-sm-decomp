extern char D_001DA2B0[];
extern char D_001DA120[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096E90(void *out);

void func_1DA060(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode, D_001DA2B0, 60, 0, -1, D_001DA120);
    func_096E90(local);
}
