/* FRONTEND:0x0056E8 -- placement copy of LEVEL_01_088020.c. */
extern int func_005748(int value);
extern unsigned int func_005650(int);
extern char *D_0002AD1C;

unsigned int func_0056E8(int value)
{
    if (func_005748(value) == 0) {
        return 0;
    }
    return func_005650(value) |
           *(unsigned int *)(D_0002AD1C + 500);
}
