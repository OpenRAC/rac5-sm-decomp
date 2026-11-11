extern char D_000FA608[];
extern char D_000FA478[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096B20(void *out);

int func_0FB1E0(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode, D_000FA608, 56, 0, 2, D_000FA478);
    return func_096B20(local);
}
