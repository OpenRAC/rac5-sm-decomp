/* LEVEL_01:0x027FF0 -- returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_028BD8(void);
extern char D_001F3FD0[];

int func_027FF0(unsigned int index)
{
    if (index >= func_028BD8())
        return 0;
    return (int)D_001F3FD0 + index * 12;
}
