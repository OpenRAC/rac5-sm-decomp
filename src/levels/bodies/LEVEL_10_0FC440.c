extern char D_000FB6C8[];
extern char D_000FB568[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096E90(void *out);

void func_0FC440(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode | 1u, D_000FB6C8, 44, 0, -1, D_000FB568);
    func_096E90(local);
}
