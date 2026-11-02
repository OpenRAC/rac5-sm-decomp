extern char D_000FD370[];
extern char D_000FD200[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096750(void *out);

void func_0FDAF0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode, D_000FD370, 48, 0, -1, D_000FD200);
    func_096750(local);
}
