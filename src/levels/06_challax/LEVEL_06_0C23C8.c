/* LEVEL_06:0x0C23C8 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_1292C8 reports state 1, otherwise runs the two setup steps on the object unless func_0D1368 refuses. */
extern int func_1292C8(int a0);
extern void func_0D1888(int a0);
extern unsigned int func_0D1368(void);
extern void func_12BE40(char *record);
extern void func_12BDE0(char *record);

void func_0C23C8(char *o)
{
    if (func_1292C8(1) != 0) {
        func_0D1888(0x1E);
    } else if (func_0D1368() == 0) {
        func_12BE40(o);
        func_12BDE0(o);
    }
}
