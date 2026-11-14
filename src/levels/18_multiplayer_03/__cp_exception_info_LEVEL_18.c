/* LEVEL_18:0x199380 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_1984A0(void);

int __cp_exception_info(void)
{
    return *func_1984A0() + 8;
}
