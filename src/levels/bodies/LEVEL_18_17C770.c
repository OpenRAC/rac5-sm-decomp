extern char D_0017BAF0[];
extern char D_0017B960[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087050(void *out);

void func_17C770(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode | 1u, D_0017BAF0, 60, 0, -1, D_0017B960);
    func_087050(local);
}
