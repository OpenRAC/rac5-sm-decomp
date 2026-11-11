/* LEVEL_09:0x026FF8 -- placement copy of LEVEL_01_027FF0.c: returns the address of record index when it is below a limit, else 0. */
extern unsigned int func_027A40(void);
extern char D_001DDDD0[];

int func_026FF8(unsigned int index)
{
    if (index >= func_027A40())
        return 0;
    return (int)D_001DDDD0 + index * 12;
}
