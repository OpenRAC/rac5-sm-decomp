/* LEVEL_04:0x1F4930 -- subtracts one seventh and a float of the object
   from two of its floats. */
void func_1F4930(void *a0)
{
    float f1 = *(float *)((char *)a0 + 0x0C) - *(float *)((char *)a0 + 0x24);
    float f0 = *(float *)((char *)a0 + 0x10) - 0.14285714285714285f;
    *(float *)((char *)a0 + 0x10) = f0;
    *(float *)((char *)a0 + 0x0C) = f1;
}
