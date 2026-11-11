/* LEVEL_22:0x0B97D8 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_00160898[];
extern int D_001605E4;
extern int func_0A4570(int index);
extern int func_016EB0(void);
extern void func_079200(int);

void func_0B97D8(void)
{
    D_00160898[D_001605E4].f = 4;
    func_0A4570(7);
    if (func_016EB0() != 0) {
        func_079200(2);
    }
}
