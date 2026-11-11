/* LEVEL_08:0x028618 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_029150(void);
extern char D_0023CB50[];

int func_028618(unsigned int index)
{
    if (index >= func_029150())
        return 0;
    return (int)D_0023CB50 + index * 12;
}
