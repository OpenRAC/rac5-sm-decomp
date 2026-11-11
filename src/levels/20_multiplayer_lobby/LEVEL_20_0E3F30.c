/* LEVEL_20:0x0E3F30 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_00117250;

extern void func_0E3F98(void);
extern void func_0E4360(void);

void func_0E3F30(void)
{
    switch (D_00117250) {
    case 1:
        func_0E3F98();
        break;
    case 2:
        func_0E4360();
        break;
    case 0:
        break;
    }
}
