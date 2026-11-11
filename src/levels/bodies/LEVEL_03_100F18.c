/* LEVEL_03:0x100F18 -- placement copy of LEVEL_04_10C970.c. */
extern char D_00100340[];
extern char D_00100128[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096750(void *out);

int func_100F18(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode | 1u, D_00100340, 76, 0, -1, D_00100128);
    return func_096750(local);
}
