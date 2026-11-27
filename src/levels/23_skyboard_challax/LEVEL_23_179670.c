/* LEVEL_23:0x179670 -- placement copy of LEVEL_01_1966F8.c: merges two block fields into the control words, registers a hashed output with its handle, queues the paired outputs and runs setup helper 7. */
extern int D_00269200[];
extern unsigned int D_001DBD24;
extern unsigned int D_001DBD28;
extern int D_001DBD2C;
extern int D_001DBD30;
extern int D_001DBD34;
extern char D_001DBDA8[];
extern char D_001DC500[];

extern void func_1A8A30(long long, long long, long long, long long);
extern void func_1B31A8(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0E2630(int index);

void func_179670(void)
{
    D_001DBD24 = (D_001DBD24 & 0xF800FFFFu) | ((unsigned int)D_00269200[90] << 16);
    D_001DBD28 = (D_001DBD28 & 0xF800FFFFu) | ((unsigned int)D_00269200[128] << 16);
    D_001DBD34 = ((int (*)(unsigned int, char *, char *, void *))func_1A8A30)(
        ((unsigned int)D_00269200[127] << 16) | 0x800060D9u, D_001DBDA8, D_001DC500, 0);
    func_1B31A8(&D_001DBD2C, D_001DBD24, &D_001DBD30, D_001DBD28, 0);
    func_0E2630(7);
}
