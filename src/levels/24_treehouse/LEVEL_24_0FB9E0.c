extern char D_000FADC8[];
extern char D_000FAB68[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F920(void *out);

void func_0FB9E0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, D_000FADC8, 72, 0, -1, D_000FAB68);
    func_08F920(local);
}
