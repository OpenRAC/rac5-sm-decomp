/* LEVEL_06:0x1DB388 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_1DA4A8(void);

int __cp_exception_info(void)
{
    return *func_1DA4A8() + 8;
}
