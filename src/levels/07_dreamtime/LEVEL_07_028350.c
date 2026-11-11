/* LEVEL_07:0x028350 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_028F18(void);
extern char D_002082D0[];

int func_028350(unsigned int index)
{
    if (index >= func_028F18())
        return 0;
    return (int)D_002082D0 + index * 12;
}
