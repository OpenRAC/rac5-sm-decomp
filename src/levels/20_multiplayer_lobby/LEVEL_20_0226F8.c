/* LEVEL_20:0x0226F8 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_023170(void);
extern char D_001041E0[];

int func_0226F8(unsigned int index)
{
    if (index >= func_023170())
        return 0;
    return (int)D_001041E0 + index * 12;
}
