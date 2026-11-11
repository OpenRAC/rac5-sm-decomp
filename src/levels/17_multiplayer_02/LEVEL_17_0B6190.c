/* LEVEL_17:0x0B6190 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001A2284;
extern unsigned char D_001A2228;
extern int D_001A228C;
extern void func_111328(int *p, int a1);

void func_0B6190(int *p)
{
    if (D_001A2284 == 1) {
        func_111328(p, 12);
    } else if (D_001A2228 != 0) {
        D_001A228C = 29;
        func_111328(p, 19);
    } else {
        func_111328(p, 30);
    }
}
