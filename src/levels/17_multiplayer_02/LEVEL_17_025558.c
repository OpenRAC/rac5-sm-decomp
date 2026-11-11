/* LEVEL_17:0x025558 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_025FE8(void);
extern char D_00195100[];

int func_025558(unsigned int index)
{
    if (index >= func_025FE8())
        return 0;
    return (int)D_00195100 + index * 12;
}
