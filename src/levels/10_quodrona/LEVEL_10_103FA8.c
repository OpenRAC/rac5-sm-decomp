extern char D_00103390[];
extern char D_00103130[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096E90(void *out);

void func_103FA8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode | 1u, D_00103390, 72, 0, -1, D_00103130);
    func_096E90(local);
}
