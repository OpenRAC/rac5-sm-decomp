/* LEVEL_16:0x0B6738 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_10FA78 reports state 1, otherwise runs the two setup steps on the object unless func_0C6160 refuses. */
extern int func_10FA78(int a0);
extern void func_0C6680(int a0);
extern unsigned int func_0C6160(void);
extern void func_111E40(char *record);
extern void func_111DE0(char *record);

void func_0B6738(char *o)
{
    if (func_10FA78(1) != 0) {
        func_0C6680(0x1E);
    } else if (func_0C6160() == 0) {
        func_111E40(o);
        func_111DE0(o);
    }
}
