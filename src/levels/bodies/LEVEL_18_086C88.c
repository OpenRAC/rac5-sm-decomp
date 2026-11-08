/* LEVEL_18.REL:0x086C88: reviewed 60-byte address_taken60 body. */
int func_086C88(const void *a_ptr, const void *b_ptr)
{
    const unsigned int *left = (const unsigned int *)a_ptr;
    const unsigned int *right = (const unsigned int *)b_ptr;
    unsigned int a = left[0];
    unsigned int b = right[0];
    if (a < b)
        return -1;
    if (a > b)
        return 1;
    return (int)left[1] - (int)right[1];
}
