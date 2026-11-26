/* LEVEL_18:0x1993A8 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1984A0(void);

int __cp_eh_info(void)
{
    return *func_1984A0();
}
