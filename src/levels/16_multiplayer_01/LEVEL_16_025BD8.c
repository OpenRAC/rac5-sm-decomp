/* LEVEL_16:0x025BD8 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_026668(void);
extern char D_001A1B00[];

int func_025BD8(unsigned int index)
{
    if (index >= func_026668())
        return 0;
    return (int)D_001A1B00 + index * 12;
}
