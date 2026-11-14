/* LEVEL_19:0x1981A0 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001BFC58)(void);

int __get_eh_context(void)
{
    return D_001BFC58();
}
