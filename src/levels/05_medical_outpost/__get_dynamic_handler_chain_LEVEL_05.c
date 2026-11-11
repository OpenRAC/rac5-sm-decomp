/* LEVEL_05:0x1DAA10 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_001F8960;

int __get_dynamic_handler_chain(void)
{
    return D_001F8960() + 4;
}
