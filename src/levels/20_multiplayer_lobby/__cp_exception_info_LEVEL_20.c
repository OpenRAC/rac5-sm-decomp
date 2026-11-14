/* LEVEL_20:0x0FA610 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_0F9730(void);

int __cp_exception_info(void)
{
    return *func_0F9730() + 8;
}
