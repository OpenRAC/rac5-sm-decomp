/* LEVEL_02:0x2001D0 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_0021E938)(void);

int __get_eh_context(void)
{
    return D_0021E938();
}
