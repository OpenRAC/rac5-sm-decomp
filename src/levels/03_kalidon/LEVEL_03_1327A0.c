/* LEVEL_03:0x1327A0 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_0021F700;

extern void func_132808(void);
extern void func_132BD0(void);

void func_1327A0(void)
{
    switch (D_0021F700) {
    case 1:
        func_132808();
        break;
    case 2:
        func_132BD0();
        break;
    case 0:
        break;
    }
}
