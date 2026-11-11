/* LEVEL_10:0x132258 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_0020FCE0;

extern void func_1322C0(void);
extern void func_132688(void);

void func_132258(void)
{
    switch (D_0020FCE0) {
    case 1:
        func_1322C0();
        break;
    case 2:
        func_132688();
        break;
    case 0:
        break;
    }
}
