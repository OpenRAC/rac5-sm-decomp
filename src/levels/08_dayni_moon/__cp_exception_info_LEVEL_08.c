/* LEVEL_08:0x234FC8 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_2340E8(void);

int __cp_exception_info(void)
{
    return *func_2340E8() + 8;
}
