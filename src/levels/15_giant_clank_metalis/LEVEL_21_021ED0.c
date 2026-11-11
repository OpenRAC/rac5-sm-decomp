/* LEVEL_21:0x021ED0 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_022790(void);
extern char D_00148C50[];

int func_021ED0(unsigned int index)
{
    if (index >= func_022790())
        return 0;
    return (int)D_00148C50 + index * 12;
}
