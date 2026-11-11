/* LEVEL_18:0x0B5710 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_10E728 reports state 1, otherwise runs the two setup steps on the object unless func_0C5138 refuses. */
extern int func_10E728(int a0);
extern void func_0C5658(int a0);
extern unsigned int func_0C5138(void);
extern void func_110AF0(char *record);
extern void func_110A90(char *record);

void func_0B5710(char *o)
{
    if (func_10E728(1) != 0) {
        func_0C5658(0x1E);
    } else if (func_0C5138() == 0) {
        func_110AF0(o);
        func_110A90(o);
    }
}
