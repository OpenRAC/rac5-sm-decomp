/* LEVEL_02:0x2010D8 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_2001F8(void);

int __cp_exception_info(void)
{
    return *func_2001F8() + 8;
}
