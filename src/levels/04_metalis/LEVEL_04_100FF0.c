extern char D_00100408[];
extern char D_00100268[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_099C18(void *out);

int func_100FF0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode, D_00100408, 56, 0, -1, D_00100268);
    return func_099C18(local);
}
