/* LEVEL_06:0x0C5B90 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001F0418[];
extern int D_001F0164;
extern void func_0B0848(int);
extern int func_019098(void);
extern void func_080C60(int);

void func_0C5B90(void)
{
    D_001F0418[D_001F0164].f = 4;
    func_0B0848(7);
    if (func_019098() != 0) {
        func_080C60(2);
    }
}
