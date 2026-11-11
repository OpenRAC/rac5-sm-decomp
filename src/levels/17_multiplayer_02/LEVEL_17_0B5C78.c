/* LEVEL_17:0x0B5C78 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_10EFF0 reports state 1, otherwise runs the two setup steps on the object unless func_0C56A0 refuses. */
extern int func_10EFF0(int a0);
extern void func_0C5BC0(int a0);
extern unsigned int func_0C56A0(void);
extern void func_1113B8(char *record);
extern void func_111358(char *record);

void func_0B5C78(char *o)
{
    if (func_10EFF0(1) != 0) {
        func_0C5BC0(0x1E);
    } else if (func_0C56A0() == 0) {
        func_1113B8(o);
        func_111358(o);
    }
}
