extern char D_00108D98[];
extern char D_00108BD8[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096750(void *out);

void func_109570(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode | 1u, D_00108D98, 64, 0, -1, D_00108BD8);
    func_096750(local);
}
