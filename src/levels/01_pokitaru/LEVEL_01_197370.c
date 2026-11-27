/* LEVEL_01:0x197370 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00297DC0[];
extern unsigned int D_00208854;
extern unsigned int D_00208858;
extern int D_0020885C;
extern int D_00208860;
extern int D_00208864;
extern char D_002088D8[];
extern char D_00209280[];

extern void func_1D7098(long long, long long, long long, long long);
extern void func_1E1D28(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EF748(int index);

void func_197370(void)
{
    D_00208854 = (D_00208854 & 0xF800FFFFu) | ((unsigned int)D_00297DC0[90] << 16);
    D_00208858 = (D_00208858 & 0xF800FFFFu) | ((unsigned int)D_00297DC0[128] << 16);
    D_00208864 = ((int (*)(unsigned int, char *, char *, void *))func_1D7098)(
        ((unsigned int)D_00297DC0[127] << 16) | 0x800060D9u, D_002088D8, D_00209280, 0);
    func_1E1D28(&D_0020885C, D_00208854, &D_00208860, D_00208858, 0);
    func_0EF748(7);
}
