/* LEVEL_23:0x0BE868 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_124370 reports state 1, otherwise runs the two setup steps on the object unless func_0CD898 refuses. */
extern int func_124370(int a0);
extern void func_0CDDB8(int a0);
extern unsigned int func_0CD898(void);
extern void func_126EE8(char *record);
extern void func_126E88(char *record);

void func_0BE868(char *o)
{
    if (func_124370(1) != 0) {
        func_0CDDB8(0x1E);
    } else if (func_0CD898() == 0) {
        func_126EE8(o);
        func_126E88(o);
    }
}
