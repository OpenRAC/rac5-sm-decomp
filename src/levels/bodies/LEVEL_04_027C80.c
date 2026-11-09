/* LEVEL_04:0x027C80 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_028680(void);
extern char D_0020D150[];

int func_027C80(unsigned int index)
{
    if (index >= func_028680())
        return 0;
    return (int)D_0020D150 + index * 12;
}
