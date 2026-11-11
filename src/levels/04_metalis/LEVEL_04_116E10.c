extern char D_00116638[];
extern char D_00116478[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_099C18(void *out);

void func_116E10(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode | 1u, D_00116638, 64, 0, -1, D_00116478);
    func_099C18(local);
}
