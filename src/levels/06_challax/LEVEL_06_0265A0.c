/* LEVEL_06:0x0265A0 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_026FC0(void);
extern char D_001E2ED0[];

int func_0265A0(unsigned int index)
{
    if (index >= func_026FC0())
        return 0;
    return (int)D_001E2ED0 + index * 12;
}
