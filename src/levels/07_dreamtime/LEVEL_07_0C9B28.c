/* LEVEL_07:0x0C9B28 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_135BF8 reports state 1, otherwise runs the two setup steps on the object unless func_0D8AC8 refuses. */
extern int func_135BF8(int a0);
extern void func_0D8FE8(int a0);
extern unsigned int func_0D8AC8(void);
extern void func_138770(char *record);
extern void func_138710(char *record);

void func_0C9B28(char *o)
{
    if (func_135BF8(1) != 0) {
        func_0D8FE8(0x1E);
    } else if (func_0D8AC8() == 0) {
        func_138770(o);
        func_138710(o);
    }
}
