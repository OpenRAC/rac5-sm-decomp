/* LEVEL_17:0x18B528 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_18A648(void);

int __cp_exception_info(void)
{
    return *func_18A648() + 8;
}
