/* LEVEL_10:0x165998 -- creates two handles from the first and third words of the table, stores them in globals, runs the follow-up and stores the hash lookup. */
extern int D_002A11C0[];
extern int D_0039F100;
extern int D_0039F104;
extern int D_00210414;
extern int func_168BB0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
extern void func_074660(void);
extern int func_127EC8(unsigned int value);

void func_165998(void)
{
    D_0039F100 = func_168BB0(0x10, D_002A11C0[0], 0, 0, 0, 1);
    D_0039F104 = func_168BB0(0x10, D_002A11C0[2], 0, 0, 0, 3);
    func_074660();
    D_00210414 = func_127EC8(0x3BC144A5U);
}
