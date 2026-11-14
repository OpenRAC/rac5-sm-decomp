/* LEVEL_16:0x196FD8 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001BEA30)(void);

int __get_eh_context(void)
{
    return D_001BEA30();
}
