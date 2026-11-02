extern char D_00104C88[];
extern char D_00104B18[];
extern void func_09D018(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09D1F0(void *out);

void func_105408(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09D018(local, mode, D_00104C88, 48, 0, -1, D_00104B18);
    func_09D1F0(local);
}
