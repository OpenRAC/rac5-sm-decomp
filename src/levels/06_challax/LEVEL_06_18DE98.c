/* LEVEL_06:0x18DE98 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00284B40[];
extern unsigned int D_001F7904;
extern unsigned int D_001F7908;
extern int D_001F790C;
extern int D_001F7910;
extern int D_001F7914;
extern char D_001F7988[];
extern char D_001F8138[];

extern void func_1C48E0(long long, long long, long long, long long);
extern void func_1CF570(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0E8808(int index);

void func_18DE98(void)
{
    D_001F7904 = (D_001F7904 & 0xF800FFFFu) | ((unsigned int)D_00284B40[90] << 16);
    D_001F7908 = (D_001F7908 & 0xF800FFFFu) | ((unsigned int)D_00284B40[128] << 16);
    D_001F7914 = ((int (*)(unsigned int, char *, char *, void *))func_1C48E0)(
        ((unsigned int)D_00284B40[127] << 16) | 0x800060D9u, D_001F7988, D_001F8138, 0);
    func_1CF570(&D_001F790C, D_001F7904, &D_001F7910, D_001F7908, 0);
    func_0E8808(7);
}
