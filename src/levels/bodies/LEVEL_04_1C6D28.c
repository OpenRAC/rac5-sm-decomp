/* LEVEL_04:0x1C6D28 -- subtracts one from the float field at +0x18 of the
   object the caller record points to at +0x58. */
void func_1C6D28(void *a0)
{
    int *p = *(int **)((char *)a0 + 0x58);
    *(float *)((char *)p + 0x18) -= 1.0f;
}
