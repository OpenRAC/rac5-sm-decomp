extern void PS2HEAP_Free__FPv(void *);
extern void *D_00302B78;

void func_101E68(void)
{
    PS2HEAP_Free__FPv(D_00302B78);
    D_00302B78 = 0;
}
