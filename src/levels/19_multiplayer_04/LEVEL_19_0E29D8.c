extern char D_000E1DF0[];
extern char D_000E1C50[];
extern void func_0879E0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087BB8(void *out);

int func_0E29D8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0879E0(local, mode, D_000E1DF0, 56, 0, -1, D_000E1C50);
    return func_087BB8(local);
}
