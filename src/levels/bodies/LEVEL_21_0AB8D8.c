/* LEVEL_21:0x0AB8D8 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_00156198[];
extern int D_00155EE4;
extern void func_096530(int);
extern int func_016A80(void);
extern void func_06C4C8(int);

void func_0AB8D8(void)
{
    D_00156198[D_00155EE4].f = 4;
    func_096530(7);
    if (func_016A80() != 0) {
        func_06C4C8(2);
    }
}
