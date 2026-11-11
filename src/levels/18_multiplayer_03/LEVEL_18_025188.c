/* LEVEL_18:0x025188 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_025C18(void);
extern char D_001A2F80[];

int func_025188(unsigned int index)
{
    if (index >= func_025C18())
        return 0;
    return (int)D_001A2F80 + index * 12;
}
