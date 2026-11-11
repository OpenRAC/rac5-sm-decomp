/* LEVEL_08:0x0D6238 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_0024A3D8[];
extern int D_0024A124;
extern int func_0C0F10(int a);
extern int func_01B210(void);
extern void func_08FE38(int);

void func_0D6238(void)
{
    D_0024A3D8[D_0024A124].f = 4;
    func_0C0F10(7);
    if (func_01B210() != 0) {
        func_08FE38(2);
    }
}
