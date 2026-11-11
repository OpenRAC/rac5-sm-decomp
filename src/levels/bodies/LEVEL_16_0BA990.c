/* LEVEL_16:0x0BA990 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_001AF3C0[];
extern int D_001AF10C;
extern int func_0A50B0(int index);
extern int func_018C08(void);
extern void func_079328(int);

void func_0BA990(void)
{
    D_001AF3C0[D_001AF10C].f = 4;
    func_0A50B0(7);
    if (func_018C08() != 0) {
        func_079328(2);
    }
}
