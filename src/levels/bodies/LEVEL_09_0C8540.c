/* LEVEL_09:0x0C8540 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001EB318[];
extern int D_001EB064;
extern void func_0B32D0(int);
extern int func_019C88(void);
extern void func_0847A0(int);

void func_0C8540(void)
{
    D_001EB318[D_001EB064].f = 4;
    func_0B32D0(7);
    if (func_019C88() != 0) {
        func_0847A0(2);
    }
}
