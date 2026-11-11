/* LEVEL_03:0x179930 -- writes the constant -0.06666667 into the float field
   at +0x28 of the object the caller record points to at +0x58. */
void func_179930(void *a0)
{
    int *p = *(int **)((char *)a0 + 0x58);
    *(float *)((char *)p + 0x28) = -0.06666667f;
}
