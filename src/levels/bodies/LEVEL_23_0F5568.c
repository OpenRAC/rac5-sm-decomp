/* LEVEL_23:0x0F5568 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000F4990[];
extern char D_000F4778[];
extern void func_08C368(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08C540(void *out);

int func_0F5568(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08C368(local, mode | 1u, D_000F4990, 76, 0, -1, D_000F4778);
    return func_08C540(local);
}
