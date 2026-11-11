/* LEVEL_07:0x1DC998 -- copies the float at 0x34 of the first object into the
   first two floats of the second one and sets its third float to one. */
void func_1DC998(void *a0, void *a1)
{
    *(float *)((char *)a1 + 0x00) = *(float *)((char *)a0 + 0x34);
    *(float *)((char *)a1 + 0x04) = *(float *)((char *)a0 + 0x34);
    *(float *)((char *)a1 + 0x08) = 1.0f;
}
