/* LEVEL_01:0x0CB290 -- sets word 0x2C of one display-list record, then calls two helpers. */
struct R { char pad[0x2c]; int f; char pad2[0x6c - 0x30]; };
extern struct R D_00201518[];
extern int D_00201264;
extern void func_0B6020(int);
extern int func_01A898(void);
extern void func_087DE8(int);

void func_0CB290(void)
{
    D_00201518[D_00201264].f = 4;
    func_0B6020(7);
    if (func_01A898() != 0) {
        func_087DE8(2);
    }
}
