/* LEVEL_06:0x0FB740 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000FAB68[];
extern char D_000FA950[];
extern void func_08F598(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_08F770(void *out);

int func_0FB740(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F598(local, mode | 1u, D_000FAB68, 76, 0, -1, D_000FA950);
    return func_08F770(local);
}
