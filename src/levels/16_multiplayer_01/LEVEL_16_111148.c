/* LEVEL_16:0x111148 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001B4B90;

extern void func_1111B0(void);
extern void func_111578(void);

void func_111148(void)
{
    switch (D_001B4B90) {
    case 1:
        func_1111B0();
        break;
    case 2:
        func_111578();
        break;
    case 0:
        break;
    }
}
