/* LEVEL_10:0x1F54C0 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1F45B8(void);

int __cp_eh_info(void)
{
    return *func_1F45B8();
}
