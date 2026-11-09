/* LEVEL_24:0x0C4BD8 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001D2198[];
extern int D_001D1EE4;
extern void func_0AF8B0(int);
extern int func_018E88(void);
extern void func_081088(int);

void func_0C4BD8(void)
{
    D_001D2198[D_001D1EE4].f = 4;
    func_0AF8B0(7);
    if (func_018E88() != 0) {
        func_081088(2);
    }
}
