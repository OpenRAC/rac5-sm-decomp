/* LEVEL_23:0x1BF8A8 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1BE9A0(void);

int __cp_eh_info(void)
{
    return *func_1BE9A0();
}
