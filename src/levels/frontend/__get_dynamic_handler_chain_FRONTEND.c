/* FRONTEND:0x0243A0 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_0010554C;

int __get_dynamic_handler_chain(void)
{
    return D_0010554C() + 4;
}
