/* LEVEL_22:0x0B5F78 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_10A0C8 reports state 1, otherwise runs the two setup steps on the object unless func_0C4FA8 refuses. */
extern int func_10A0C8(int a0);
extern void func_0C54C8(int a0);
extern unsigned int func_0C4FA8(void);
extern void func_10CC40(char *record);
extern void func_10CBE0(char *record);

void func_0B5F78(char *o)
{
    if (func_10A0C8(1) != 0) {
        func_0C54C8(0x1E);
    } else if (func_0C4FA8() == 0) {
        func_10CC40(o);
        func_10CBE0(o);
    }
}
