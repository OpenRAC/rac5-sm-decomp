/* LEVEL_08:0x145910 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_0024FF40;

extern void func_145978(void);
extern void func_145D40(void);

void func_145910(void)
{
    switch (D_0024FF40) {
    case 1:
        func_145978();
        break;
    case 2:
        func_145D40();
        break;
    case 0:
        break;
    }
}
