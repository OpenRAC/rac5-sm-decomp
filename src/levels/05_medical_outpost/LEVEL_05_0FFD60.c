/* LEVEL_05:0x0FFD60 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000FF188[];
extern char D_000FEF70[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_094218(void *out);

int func_0FFD60(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode | 1u, D_000FF188, 76, 0, -1, D_000FEF70);
    return func_094218(local);
}
