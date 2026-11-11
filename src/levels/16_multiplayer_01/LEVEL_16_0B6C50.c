/* LEVEL_16:0x0B6C50 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001AEC84;
extern unsigned char D_001AEC28;
extern int D_001AEC8C;
extern void func_111DB0(int *p, int a1);

void func_0B6C50(int *p)
{
    if (D_001AEC84 == 1) {
        func_111DB0(p, 12);
    } else if (D_001AEC28 != 0) {
        D_001AEC8C = 29;
        func_111DB0(p, 19);
    } else {
        func_111DB0(p, 30);
    }
}
