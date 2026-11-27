/* LEVEL_01:0x1966F8 -- merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00297DC0[];
extern unsigned int D_002087AC;
extern unsigned int D_002087B0;
extern int D_002087B4;
extern int D_002087B8;
extern int D_002087BC;
extern char D_00208830[];
extern char D_00209280[];

extern void func_1D7098(long long, long long, long long, long long);
extern void func_1E1D28(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EF748(int index);

void func_1966F8(void)
{
    D_002087AC = (D_002087AC & 0xF800FFFFu) | ((unsigned int)D_00297DC0[90] << 16);
    D_002087B0 = (D_002087B0 & 0xF800FFFFu) | ((unsigned int)D_00297DC0[128] << 16);
    D_002087BC = ((int (*)(unsigned int, char *, char *, void *))func_1D7098)(
        ((unsigned int)D_00297DC0[127] << 16) | 0x800060D9u, D_00208830, D_00209280, 0);
    func_1E1D28(&D_002087B4, D_002087AC, &D_002087B8, D_002087B0, 0);
    func_0EF748(7);
}
