/* LEVEL_17:0x18B550 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_18A648(void);

int __cp_eh_info(void)
{
    return *func_18A648();
}
