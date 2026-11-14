/* LEVEL_01:0x1EC440 -- returns the first word of the current exception record plus 8. */
extern int *func_1EB560(void);

int __cp_exception_info(void)
{
    return *func_1EB560() + 8;
}
