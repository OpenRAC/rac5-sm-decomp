extern char D_000E73B0[];
extern char D_000E72E8[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_087708(void *out);

int func_0E7A98(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode, D_000E73B0, 16, 0, -1, D_000E72E8);
    return func_087708(local);
}
