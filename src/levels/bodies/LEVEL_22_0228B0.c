/* LEVEL_22:0x0228B0 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_023170(void);
extern char D_00153350[];

int func_0228B0(unsigned int index)
{
    if (index >= func_023170())
        return 0;
    return (int)D_00153350 + index * 12;
}
