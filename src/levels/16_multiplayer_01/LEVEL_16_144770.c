extern char D_00143420[];
extern char D_001432E0[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087708(void *out);

void func_144770(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode | 1u, D_00143420, 48, 0, -1, D_001432E0);
    func_087708(local);
}
