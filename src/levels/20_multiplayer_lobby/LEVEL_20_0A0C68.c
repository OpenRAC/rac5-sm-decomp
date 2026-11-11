/* LEVEL_20:0x0A0C68 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_0E2860 reports state 1, otherwise runs the two setup steps on the object unless func_0B0690 refuses. */
extern int func_0E2860(int a0);
extern void func_0B0BB0(int a0);
extern unsigned int func_0B0690(void);
extern void func_0E4C28(char *record);
extern void func_0E4BC8(char *record);

void func_0A0C68(char *o)
{
    if (func_0E2860(1) != 0) {
        func_0B0BB0(0x1E);
    } else if (func_0B0690() == 0) {
        func_0E4C28(o);
        func_0E4BC8(o);
    }
}
