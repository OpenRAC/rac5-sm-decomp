/* LEVEL_07:0x2007E0 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1FF8D8(void);

int __cp_eh_info(void)
{
    return *func_1FF8D8();
}
