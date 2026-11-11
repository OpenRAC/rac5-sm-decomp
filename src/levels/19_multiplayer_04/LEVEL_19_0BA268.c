/* LEVEL_19:0x0BA268 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001B0540[];
extern int D_001B028C;
extern int func_0A4928(int a);
extern int func_018908(void);
extern void func_079810(int);

void func_0BA268(void)
{
    D_001B0540[D_001B028C].f = 4;
    func_0A4928(7);
    if (func_018908() != 0) {
        func_079810(2);
    }
}
