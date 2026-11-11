/* LEVEL_22:0x0E5C70 -- placement copy of LEVEL_04_10C970.c. */
extern char D_000E5098[];
extern char D_000E4E80[];
extern void func_087718(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0878F0(void *out);

int func_0E5C70(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087718(local, mode | 1u, D_000E5098, 76, 0, -1, D_000E4E80);
    return func_0878F0(local);
}
