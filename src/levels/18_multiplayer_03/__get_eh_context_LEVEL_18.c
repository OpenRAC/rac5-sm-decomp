/* LEVEL_18:0x198478 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001BFFF0)(void);

int __get_eh_context(void)
{
    return D_001BFFF0();
}
