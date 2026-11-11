/* LEVEL_09:0x1D5480 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_001F3668;

int __get_dynamic_handler_chain(void)
{
    return D_001F3668() + 4;
}
