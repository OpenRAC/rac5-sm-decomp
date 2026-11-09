/* LEVEL_17:0x0B9ED0 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001A29C0[];
extern int D_001A270C;
extern void func_0A4590(int);
extern int func_018588(void);
extern void func_079DA0(int);

void func_0B9ED0(void)
{
    D_001A29C0[D_001A270C].f = 4;
    func_0A4590(7);
    if (func_018588() != 0) {
        func_079DA0(2);
    }
}
