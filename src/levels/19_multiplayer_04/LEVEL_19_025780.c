/* LEVEL_19:0x025780 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_026210(void);
extern char D_001A2C80[];

int func_025780(unsigned int index)
{
    if (index >= func_026210())
        return 0;
    return (int)D_001A2C80 + index * 12;
}
