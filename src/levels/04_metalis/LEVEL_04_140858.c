/* LEVEL_04:0x140858 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_002204A0;

extern void func_1408C0(void);
extern void func_140C88(void);

void func_140858(void)
{
    switch (D_002204A0) {
    case 1:
        func_1408C0();
        break;
    case 2:
        func_140C88();
        break;
    case 0:
        break;
    }
}
