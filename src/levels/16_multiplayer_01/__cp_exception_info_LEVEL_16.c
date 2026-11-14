/* LEVEL_16:0x197EE0 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_197000(void);

int __cp_exception_info(void)
{
    return *func_197000() + 8;
}
