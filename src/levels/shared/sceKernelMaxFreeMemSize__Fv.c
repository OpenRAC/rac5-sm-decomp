/* Forward to PS2HEAP_MaxFreeMemSize__Fv. */
extern int PS2HEAP_MaxFreeMemSize__Fv(void);

int sceKernelMaxFreeMemSize__Fv(void)
{
    return PS2HEAP_MaxFreeMemSize__Fv();
}
