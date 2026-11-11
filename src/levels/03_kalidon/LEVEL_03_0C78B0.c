/* LEVEL_03:0x0C78B0 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_130FC0 reports state 1, otherwise runs the two setup steps on the object unless func_0D6850 refuses. */
extern int func_130FC0(int a0);
extern void func_0D6D70(int a0);
extern unsigned int func_0D6850(void);
extern void func_133B38(char *record);
extern void func_133AD8(char *record);

void func_0C78B0(char *o)
{
    if (func_130FC0(1) != 0) {
        func_0D6D70(0x1E);
    } else if (func_0D6850() == 0) {
        func_133B38(o);
        func_133AD8(o);
    }
}
