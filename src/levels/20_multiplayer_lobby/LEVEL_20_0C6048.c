extern char D_000C5960[];
extern char D_000C5898[];
extern void func_074D68(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_074F40(void *out);

int func_0C6048(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_074D68(local, mode, D_000C5960, 16, 0, -1, D_000C5898);
    return func_074F40(local);
}
