/* LEVEL_06:0x1DB3B0 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1DA4A8(void);

int __cp_eh_info(void)
{
    return *func_1DA4A8();
}
