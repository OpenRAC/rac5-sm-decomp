/* LEVEL_15:0x0FBA28 -- sets a float field located just before the object pointer to -1.0f. */
void func_0FBA28(char *o)
{
    *(float *)(o - 0x28) = -1.0f;
}
