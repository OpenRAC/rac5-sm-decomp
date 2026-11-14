/* LEVEL_22:0x14A8F0 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001670A8)(void);

int __get_eh_context(void)
{
    return D_001670A8();
}
