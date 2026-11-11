/* LEVEL_15:0x11F570 -- sets the float stored 0x48 bytes before the object pointer to -1.0f. */
void func_11F570(char *o)
{
    *(float *)(o - 0x48) = -1.0f;
}
