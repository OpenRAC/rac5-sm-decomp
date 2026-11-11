/* LEVEL_06:0x1DA560 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_001F88A0;

int __get_dynamic_handler_chain(void)
{
    return D_001F88A0() + 4;
}
