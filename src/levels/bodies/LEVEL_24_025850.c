/* LEVEL_24:0x025850 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_026118(void);
extern char D_001C4C50[];

int func_025850(unsigned int index)
{
    if (index >= func_026118())
        return 0;
    return (int)D_001C4C50 + index * 12;
}
