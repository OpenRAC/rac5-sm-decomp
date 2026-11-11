/* LEVEL_04:0x0D0B28 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_0021A9D8[];
extern int D_0021A724;
extern int func_0BB828(int index);
extern int func_01A518(void);
extern void func_08B080(int);

void func_0D0B28(void)
{
    D_0021A9D8[D_0021A724].f = 4;
    func_0BB828(7);
    if (func_01A518() != 0) {
        func_08B080(2);
    }
}
