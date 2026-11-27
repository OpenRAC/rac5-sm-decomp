/* LEVEL_01:0x1EC468 -- returns the first word of the current exception record. */
extern int *func_1EB560(void);

int __cp_eh_info(void)
{
    return *func_1EB560();
}
