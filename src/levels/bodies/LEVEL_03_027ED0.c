/* LEVEL_03:0x027ED0 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_0289D0(void);
extern char D_0020C650[];

int func_027ED0(unsigned int index)
{
    if (index >= func_0289D0())
        return 0;
    return (int)D_0020C650 + index * 12;
}
