/* LEVEL_05:0x0C6070 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_12E570 reports state 1, otherwise runs the two setup steps on the object unless func_0D5010 refuses. */
extern int func_12E570(int a0);
extern void func_0D5530(int a0);
extern unsigned int func_0D5010(void);
extern void func_1310E8(char *record);
extern void func_131088(char *record);

void func_0C6070(char *o)
{
    if (func_12E570(1) != 0) {
        func_0D5530(0x1E);
    } else if (func_0D5010() == 0) {
        func_1310E8(o);
        func_131088(o);
    }
}
