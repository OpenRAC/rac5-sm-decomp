/* LEVEL_18:1629E0 -- seeds the record with the global handle, the constant
   scale five and a cleared tail. */
extern int D_001D6A20;
void func_1629E0(char *a0)
{
    *(int *)(a0 + 0x0) = D_001D6A20;
    *(float *)(a0 + 0x4) = 5.0f;
    *(int *)(a0 + 0x8) = 0;
}
