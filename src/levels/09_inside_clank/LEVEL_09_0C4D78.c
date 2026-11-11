/* LEVEL_09:0x0C4D78 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_12BB90 reports state 1, otherwise runs the two setup steps on the object unless func_0D3D18 refuses. */
extern int func_12BB90(int a0);
extern void func_0D4238(int a0);
extern unsigned int func_0D3D18(void);
extern void func_12E708(char *record);
extern void func_12E6A8(char *record);

void func_0C4D78(char *o)
{
    if (func_12BB90(1) != 0) {
        func_0D4238(0x1E);
    } else if (func_0D3D18() == 0) {
        func_12E708(o);
        func_12E6A8(o);
    }
}
