/* LEVEL_08:0x2341A0 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_00253530;

int __get_dynamic_handler_chain(void)
{
    return D_00253530() + 4;
}
