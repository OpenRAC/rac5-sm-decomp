extern char D_000EEC70[];
extern char D_000EEB10[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08C540(void *out);

void func_0EF9E8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode | 1u, D_000EEC70, 44, 0, -1, D_000EEB10);
    func_08C540(local);
}
