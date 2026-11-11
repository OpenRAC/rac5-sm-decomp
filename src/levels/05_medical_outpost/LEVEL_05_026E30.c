/* LEVEL_05:0x026E30 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_027850(void);
extern char D_001E3350[];

int func_026E30(unsigned int index)
{
    if (index >= func_027850())
        return 0;
    return (int)D_001E3350 + index * 12;
}
