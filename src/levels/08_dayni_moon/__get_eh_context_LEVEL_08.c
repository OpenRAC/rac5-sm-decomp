/* LEVEL_08:0x2340C0 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_00253530)(void);

int __get_eh_context(void)
{
    return D_00253530();
}
