/* LEVEL_08:20FA78 -- normalises the object's scale (1.0 / field at +4 of the
   sub-record) and multiplies the second sub-record's factor into it. */
void func_20FA78(char *a0)
{
    *(float *)(a0 + 0x18) = 1.0f / *(float *)(*(char **)(a0 + 4) + 4);
    *(float *)(a0 + 0x1C) = *(float *)(*(char **)(a0 + 8) + 0x28) * *(float *)(a0 + 0x18);
}
