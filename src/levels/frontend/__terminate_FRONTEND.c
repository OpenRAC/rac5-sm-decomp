/* FRONTEND:0x024208 -- calls the function pointer stored at 0x105548. */
extern void (*D_00105548)(void);

void __terminate(void)
{
    D_00105548();
}
