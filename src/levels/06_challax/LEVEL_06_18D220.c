/* LEVEL_06:0x18D220 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00284B40[];
extern unsigned int D_001F785C;
extern unsigned int D_001F7860;
extern int D_001F7864;
extern int D_001F7868;
extern int D_001F786C;
extern char D_001F78E0[];
extern char D_001F8138[];

extern void func_1C48E0(long long, long long, long long, long long);
extern void func_1CF570(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0E8808(int index);

void func_18D220(void)
{
    D_001F785C = (D_001F785C & 0xF800FFFFu) | ((unsigned int)D_00284B40[90] << 16);
    D_001F7860 = (D_001F7860 & 0xF800FFFFu) | ((unsigned int)D_00284B40[128] << 16);
    D_001F786C = ((int (*)(unsigned int, char *, char *, void *))func_1C48E0)(
        ((unsigned int)D_00284B40[127] << 16) | 0x800060D9u, D_001F78E0, D_001F8138, 0);
    func_1CF570(&D_001F7864, D_001F785C, &D_001F7868, D_001F7860, 0);
    func_0E8808(7);
}
