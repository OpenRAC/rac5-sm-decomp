/* LEVEL_04:0x205600 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_204720(void);

int __cp_exception_info(void)
{
    return *func_204720() + 8;
}
