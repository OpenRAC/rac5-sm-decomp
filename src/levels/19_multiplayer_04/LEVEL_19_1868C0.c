extern char D_00186B10[];
extern char D_00186980[];
extern void func_0879E0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087BB8(void *out);

void func_1868C0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0879E0(local, mode, D_00186B10, 60, 0, -1, D_00186980);
    func_087BB8(local);
}
