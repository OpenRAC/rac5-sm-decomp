/* LEVEL_23:0x0C20C8 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001D4918[];
extern int D_001D4664;
extern int func_0ACDE8(int index);
extern int func_0193A8(void);
extern void func_07DCA8(int);

void func_0C20C8(void)
{
    D_001D4918[D_001D4664].f = 4;
    func_0ACDE8(7);
    if (func_0193A8() != 0) {
        func_07DCA8(2);
    }
}
