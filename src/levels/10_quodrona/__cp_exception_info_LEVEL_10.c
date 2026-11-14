/* LEVEL_10:0x1F5498 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_1F45B8(void);

int __cp_exception_info(void)
{
    return *func_1F45B8() + 8;
}
