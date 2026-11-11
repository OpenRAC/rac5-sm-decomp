/* LEVEL_01:0x0C7AC8 -- plays the sound 0x1E when func_132BF8 reports state 1, otherwise runs the two setup steps on the object unless func_0D6A68 refuses. */
extern int func_132BF8(int a0);
extern void func_0D6F88(int a0);
extern unsigned int func_0D6A68(void);
extern void func_135770(char *record);
extern void func_135710(char *record);

void func_0C7AC8(char *o)
{
    if (func_132BF8(1) != 0) {
        func_0D6F88(0x1E);
    } else if (func_0D6A68() == 0) {
        func_135770(o);
        func_135710(o);
    }
}
