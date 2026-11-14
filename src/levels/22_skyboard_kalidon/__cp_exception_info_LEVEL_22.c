/* LEVEL_22:0x14B7F8 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_14A918(void);

int __cp_exception_info(void)
{
    return *func_14A918() + 8;
}
