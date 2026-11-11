/* LEVEL_10:0x0CC6D0 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_0020A518[];
extern int D_0020A264;
extern int func_0B71F8(int index);
extern int func_019F18(void);
extern void func_088150(int);

void func_0CC6D0(void)
{
    D_0020A518[D_0020A264].f = 4;
    func_0B71F8(7);
    if (func_019F18() != 0) {
        func_088150(2);
    }
}
