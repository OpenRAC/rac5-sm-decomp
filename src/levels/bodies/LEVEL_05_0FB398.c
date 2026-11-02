extern char D_000FAC18[];
extern char D_000FAAA8[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_094218(void *out);

void func_0FB398(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode, D_000FAC18, 48, 0, -1, D_000FAAA8);
    func_094218(local);
}
