/* LEVEL_01:0x1EB618 -- calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_002099E8;

int __get_dynamic_handler_chain(void)
{
    return D_002099E8() + 4;
}
