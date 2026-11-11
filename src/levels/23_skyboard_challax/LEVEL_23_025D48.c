/* LEVEL_23:0x025D48 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_026748(void);
extern char D_001C73D0[];

int func_025D48(unsigned int index)
{
    if (index >= func_026748())
        return 0;
    return (int)D_001C73D0 + index * 12;
}
