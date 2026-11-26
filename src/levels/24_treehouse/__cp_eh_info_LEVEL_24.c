/* LEVEL_24:0x1BD140 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1BC238(void);

int __cp_eh_info(void)
{
    return *func_1BC238();
}
