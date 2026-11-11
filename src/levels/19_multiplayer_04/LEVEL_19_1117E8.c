/* LEVEL_19:0x1117E8 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001B5D10;

extern void func_111850(void);
extern void func_111C18(void);

void func_1117E8(void)
{
    switch (D_001B5D10) {
    case 1:
        func_111850();
        break;
    case 2:
        func_111C18();
        break;
    case 0:
        break;
    }
}
