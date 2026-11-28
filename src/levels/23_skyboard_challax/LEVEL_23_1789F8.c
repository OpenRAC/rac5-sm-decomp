/* LEVEL_23:0x1789F8 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00269200[];
extern unsigned int D_001DBC7C;
extern unsigned int D_001DBC80;
extern int D_001DBC84;
extern int D_001DBC88;
extern int D_001DBC8C;
extern char D_001DBD00[];
extern char D_001DC500[];

extern void func_1A8A30(long long, long long, long long, long long);
extern void func_1B31A8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0E2630(int index);

void func_1789F8(void)
{
    D_001DBC7C = (D_001DBC7C & 0xF800FFFFu) | ((unsigned int)D_00269200[90] << 16);
    D_001DBC80 = (D_001DBC80 & 0xF800FFFFu) | ((unsigned int)D_00269200[128] << 16);
    D_001DBC8C = ((int (*)(unsigned int, char *, char *, void *))func_1A8A30)(
        ((unsigned int)D_00269200[127] << 16) | 0x800060D9u, D_001DBD00, D_001DC500, 0);
    func_1B31A8(&D_001DBC84, D_001DBC7C, &D_001DBC88, D_001DBC80, 0);
    func_0E2630(7);
}
