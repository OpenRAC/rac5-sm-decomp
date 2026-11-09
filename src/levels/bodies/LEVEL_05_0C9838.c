/* LEVEL_05:0x0C9838 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001F0898[];
extern int D_001F05E4;
extern void func_0B45C8(int);
extern int func_019E30(void);
extern void func_085740(int);

void func_0C9838(void)
{
    D_001F0898[D_001F05E4].f = 4;
    func_0B45C8(7);
    if (func_019E30() != 0) {
        func_085740(2);
    }
}
