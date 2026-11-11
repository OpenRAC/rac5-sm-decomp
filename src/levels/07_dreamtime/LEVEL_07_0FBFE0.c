extern char D_000FB408[];
extern char D_000FB278[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0989A8(void *out);

int func_0FBFE0(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode, D_000FB408, 56, 0, 2, D_000FB278);
    return func_0989A8(local);
}
