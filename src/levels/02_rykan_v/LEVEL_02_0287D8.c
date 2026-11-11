/* LEVEL_02:0x0287D8 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_0293A0(void);
extern char D_00208C50[];

int func_0287D8(unsigned int index)
{
    if (index >= func_0293A0())
        return 0;
    return (int)D_00208C50 + index * 12;
}
