/* LEVEL_05:0x1DB860 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1DA958(void);

int __cp_eh_info(void)
{
    return *func_1DA958();
}
