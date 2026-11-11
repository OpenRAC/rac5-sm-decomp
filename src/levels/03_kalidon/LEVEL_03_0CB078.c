/* LEVEL_03:0x0CB078 -- placement copy of LEVEL_01_0CB290.c: sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_00219B98[];
extern int D_002198E4;
extern int func_0B5E08(int index);
extern int func_01A600(void);
extern void func_087C40(int);

void func_0CB078(void)
{
    D_00219B98[D_002198E4].f = 4;
    func_0B5E08(7);
    if (func_01A600() != 0) {
        func_087C40(2);
    }
}
