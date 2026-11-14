/* LEVEL_01:0x1EB538 -- calls the function pointer stored in a global. */
extern int (*D_002099E8)(void);

int __get_eh_context(void)
{
    return D_002099E8();
}
