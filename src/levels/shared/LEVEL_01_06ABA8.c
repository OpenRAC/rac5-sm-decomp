/* LEVEL_01:0x06ABA8 -- stores one into the float field at 0xF58 of the
   argument object. */
void func_06ABA8(void *a0)
{
    *(float *)((char *)a0 + 0xF58) = 1.0f;
}
