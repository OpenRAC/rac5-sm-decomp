extern char D_00119880[];
extern char D_00119710[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_099C18(void *out);

void func_11A610(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode | 1u, D_00119880, 28, 0, -1, D_00119710);
    func_099C18(local);
}
