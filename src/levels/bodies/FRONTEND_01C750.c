void PS2HEAP_Free__FPv(void *);

extern int D_001977B8[];

void func_01C750(void)
{
    PS2HEAP_Free__FPv((void *)D_001977B8[0]);
    D_001977B8[0] = 0;
}
