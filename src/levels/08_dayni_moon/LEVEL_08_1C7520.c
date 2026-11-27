/* LEVEL_08:0x1C7520 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002E7040[];
extern unsigned int D_00251F7C;
extern unsigned int D_00251F80;
extern int D_00251F84;
extern int D_00251F88;
extern int D_00251F8C;
extern char D_00252000[];
extern char D_00252D70[];

extern void func_2183F0(long long, long long, long long, long long);
extern void func_2254D0(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0FB190(int index);

void func_1C7520(void)
{
    D_00251F7C = (D_00251F7C & 0xF800FFFFu) | ((unsigned int)D_002E7040[90] << 16);
    D_00251F80 = (D_00251F80 & 0xF800FFFFu) | ((unsigned int)D_002E7040[128] << 16);
    D_00251F8C = ((int (*)(unsigned int, char *, char *, void *))func_2183F0)(
        ((unsigned int)D_002E7040[127] << 16) | 0x800060D9u, D_00252000, D_00252D70, 0);
    func_2254D0(&D_00251F84, D_00251F7C, &D_00251F88, D_00251F80, 0);
    func_0FB190(7);
}
