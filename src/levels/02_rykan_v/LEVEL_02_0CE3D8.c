/* LEVEL_02:0x0CE3D8 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_138FA8 reports state 1, otherwise runs the two setup steps on the object unless func_0DD3F8 refuses. */
extern int func_138FA8(int a0);
extern void func_0DD918(int a0);
extern unsigned int func_0DD3F8(void);
extern void func_13BB20(char *record);
extern void func_13BAC0(char *record);

void func_0CE3D8(char *o)
{
    if (func_138FA8(1) != 0) {
        func_0DD918(0x1E);
    } else if (func_0DD3F8() == 0) {
        func_13BB20(o);
        func_13BAC0(o);
    }
}
