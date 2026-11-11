/* LEVEL_24:0x0C1390 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_1286F8 reports state 1, otherwise runs the two setup steps on the object unless func_0D03C0 refuses. */
extern int func_1286F8(int a0);
extern void func_0D08E0(int a0);
extern unsigned int func_0D03C0(void);
extern void func_12B270(char *record);
extern void func_12B210(char *record);

void func_0C1390(char *o)
{
    if (func_1286F8(1) != 0) {
        func_0D08E0(0x1E);
    } else if (func_0D03C0() == 0) {
        func_12B270(o);
        func_12B210(o);
    }
}
