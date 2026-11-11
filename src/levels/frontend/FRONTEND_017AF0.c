/* FRONTEND:0x017AF0 -- placement copy of LEVEL_01_0C7AC8.c: plays the sound 0x1E when func_0205B8 reports state 1, otherwise runs the two setup steps on the object unless func_013C00 refuses. */
extern int func_0205B8(int a0);
extern void func_014118(int a0);
extern unsigned int func_013C00(void);
extern void func_022A30(char *record);
extern void func_0229D0(char *record);

void func_017AF0(char *o)
{
    if (func_0205B8(1) != 0) {
        func_014118(0x1E);
    } else if (func_013C00() == 0) {
        func_022A30(o);
        func_0229D0(o);
    }
}
