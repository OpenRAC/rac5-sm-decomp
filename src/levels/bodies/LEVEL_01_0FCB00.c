extern char D_000FBD88[];
extern char D_000FBC28[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_0FCB00(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode | 1u, D_000FBD88, 44, 0, -1, D_000FBC28);
    func_096B20(local);
}
