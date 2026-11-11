extern char D_000ED768[];
extern char D_000ED5F8[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087050(void *out);

void func_0EE4F8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode | 1u, D_000ED768, 28, 0, -1, D_000ED5F8);
    func_087050(local);
}
