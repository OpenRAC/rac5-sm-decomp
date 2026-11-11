/* LEVEL_06:18BE10 -- fills the three words of the small record: the counter
   from D_002129A0, the constant five and a zero. */
extern int D_002129A0;

void func_18BE10(int a0)
{
    int v = D_002129A0;

    *(float *)(a0 + 4) = 5.0f;
    *(int *)(a0 + 0) = v;
    *(int *)(a0 + 8) = 0;
}
