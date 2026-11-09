/* LEVEL_20:0x0A4EC0 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_00111AA0[];
extern int D_001117EC;
extern void func_08F6B0(int);
extern int func_0169C0(void);
extern void func_066F98(int);

void func_0A4EC0(void)
{
    D_00111AA0[D_001117EC].f = 4;
    func_08F6B0(7);
    if (func_0169C0() != 0) {
        func_066F98(2);
    }
}
