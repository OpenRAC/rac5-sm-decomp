/* LEVEL_19:0x1481E8 -- stores the value in the first word of the object's record. */
void func_1481E8(char *o, int value)
{
    **(int **)(o + 0x58) = value;
}
