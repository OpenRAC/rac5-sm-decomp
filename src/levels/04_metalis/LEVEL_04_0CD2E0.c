/* LEVEL_04:0x0CD2E0 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_13F078 reports state 1, otherwise runs the two setup steps on the object unless func_0DC318 refuses. */
extern int func_13F078(int a0);
extern void func_0DC838(int a0);
extern unsigned int func_0DC318(void);
extern void func_141BF0(char *record);
extern void func_141B90(char *record);

void func_0CD2E0(char *o)
{
    if (func_13F078(1) != 0) {
        func_0DC838(0x1E);
    } else if (func_0DC318() == 0) {
        func_141BF0(o);
        func_141B90(o);
    }
}
