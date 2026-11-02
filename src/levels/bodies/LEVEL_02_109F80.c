extern char D_00109368[];
extern char D_00109108[];
extern void func_09D018(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09D1F0(void *out);

void func_109F80(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09D018(local, mode | 1u, D_00109368, 72, 0, -1, D_00109108);
    func_09D1F0(local);
}
