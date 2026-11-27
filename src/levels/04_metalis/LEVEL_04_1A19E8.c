/* LEVEL_04:0x1A19E8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_002B25C0[];
extern unsigned int D_00221E94;
extern unsigned int D_00221E98;
extern int D_00221E9C;
extern int D_00221EA0;
extern int D_00221EA4;
extern char D_00221F18[];
extern char D_00222B68[];

extern void func_1EE080(long long, long long, long long, long long);
extern void func_1F9EC8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0F6C80(int index);

void func_1A19E8(void)
{
    D_00221E94 = (D_00221E94 & 0xF800FFFFu) | ((unsigned int)D_002B25C0[90] << 16);
    D_00221E98 = (D_00221E98 & 0xF800FFFFu) | ((unsigned int)D_002B25C0[128] << 16);
    D_00221EA4 = ((int (*)(unsigned int, char *, char *, void *))func_1EE080)(
        ((unsigned int)D_002B25C0[127] << 16) | 0x800060D9u, D_00221F18, D_00222B68, 0);
    func_1F9EC8(&D_00221E9C, D_00221E94, &D_00221EA0, D_00221E98, 0);
    func_0F6C80(7);
}
