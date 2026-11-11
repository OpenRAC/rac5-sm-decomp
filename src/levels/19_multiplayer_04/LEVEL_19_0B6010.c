/* LEVEL_19:0x0B6010 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_110118 reports state 1, otherwise runs the two setup steps on the object unless func_0C5A38 refuses. */
extern int func_110118(int a0);
extern void func_0C5F58(int a0);
extern unsigned int func_0C5A38(void);
extern void func_1124E0(char *record);
extern void func_112480(char *record);

void func_0B6010(char *o)
{
    if (func_110118(1) != 0) {
        func_0C5F58(0x1E);
    } else if (func_0C5A38() == 0) {
        func_1124E0(o);
        func_112480(o);
    }
}
