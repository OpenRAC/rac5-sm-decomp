/* Forward to PS2HEAP_TotalFreeMemSize__Fv. */
extern int PS2HEAP_TotalFreeMemSize__Fv(void);

int sceKernelTotalFreeMemSize__Fv(void)
{
    return PS2HEAP_TotalFreeMemSize__Fv();
}
