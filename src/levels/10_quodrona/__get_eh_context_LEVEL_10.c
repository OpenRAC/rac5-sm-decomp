/* LEVEL_10:0x1F4590 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_00212970)(void);

int __get_eh_context(void)
{
    return D_00212970();
}
