/* LEVEL_08:0x0D29F0 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_144130 reports state 1, otherwise runs the two setup steps on the object unless func_0E1A28 refuses. */
extern int func_144130(int a0);
extern void func_0E1F48(int a0);
extern unsigned int func_0E1A28(void);
extern void func_146CA8(char *record);
extern void func_146C48(char *record);

void func_0D29F0(char *o)
{
    if (func_144130(1) != 0) {
        func_0E1F48(0x1E);
    } else if (func_0E1A28() == 0) {
        func_146CA8(o);
        func_146C48(o);
    }
}
