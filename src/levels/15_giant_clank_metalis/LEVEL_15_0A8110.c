/* LEVEL_15:0x0A8110 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_0F1AC0 reports state 1, otherwise runs the two setup steps on the object unless func_0B70A8 refuses. */
extern int func_0F1AC0(int a0);
extern void func_0B75C8(int a0);
extern unsigned int func_0B70A8(void);
extern void func_0F4638(char *record);
extern void func_0F45D8(char *record);

void func_0A8110(char *o)
{
    if (func_0F1AC0(1) != 0) {
        func_0B75C8(0x1E);
    } else if (func_0B70A8() == 0) {
        func_0F4638(o);
        func_0F45D8(o);
    }
}
