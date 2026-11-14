/* LEVEL_03:0x204AD0 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_203BF0(void);

int __cp_exception_info(void)
{
    return *func_203BF0() + 8;
}
