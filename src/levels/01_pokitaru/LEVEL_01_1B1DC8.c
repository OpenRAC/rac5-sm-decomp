extern char D_001B1148[];
extern char D_001B0FB8[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_1B1DC8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode | 1u, D_001B1148, 60, 0, -1, D_001B0FB8);
    func_096B20(local);
}
