/* LEVEL_19:0x1990A8 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_1981C8(void);

int __cp_exception_info(void)
{
    return *func_1981C8() + 8;
}
