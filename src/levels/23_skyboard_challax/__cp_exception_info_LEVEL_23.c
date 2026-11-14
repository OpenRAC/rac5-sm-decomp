/* LEVEL_23:0x1BF880 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_1BE9A0(void);

int __cp_exception_info(void)
{
    return *func_1BE9A0() + 8;
}
