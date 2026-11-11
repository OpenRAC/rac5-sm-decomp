/* LEVEL_10:0x0C8F08 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_130A58 reports state 1, otherwise runs the two setup steps on the object unless func_0D7EA8 refuses. */
extern int func_130A58(int a0);
extern void func_0D83C8(int a0);
extern unsigned int func_0D7EA8(void);
extern void func_1335F0(char *record);
extern void func_133590(char *record);

void func_0C8F08(char *o)
{
    if (func_130A58(1) != 0) {
        func_0D83C8(0x1E);
    } else if (func_0D7EA8() == 0) {
        func_1335F0(o);
        func_133590(o);
    }
}
