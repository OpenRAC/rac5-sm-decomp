/* LEVEL_02:0x13A788 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_0021C040;

extern void func_13A7F0(void);
extern void func_13ABB8(void);

void func_13A788(void)
{
    switch (D_0021C040) {
    case 1:
        func_13A7F0();
        break;
    case 2:
        func_13ABB8();
        break;
    case 0:
        break;
    }
}
