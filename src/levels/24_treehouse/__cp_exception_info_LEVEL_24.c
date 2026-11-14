/* LEVEL_24:0x1BD118 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_1BC238(void);

int __cp_exception_info(void)
{
    return *func_1BC238() + 8;
}
