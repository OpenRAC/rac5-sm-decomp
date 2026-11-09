/* LEVEL_10:0x0278D0 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_0289B0(void);
extern char D_001FCFD0[];

int func_0278D0(unsigned int index)
{
    if (index >= func_0289B0())
        return 0;
    return (int)D_001FCFD0 + index * 12;
}
