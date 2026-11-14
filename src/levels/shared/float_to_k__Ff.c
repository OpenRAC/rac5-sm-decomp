/* LEVEL_01:0x0A3FD8 -- converts a float to 1/16 fixed point and keeps the low 12 bits. */
int float_to_k__Ff(float f)
{
    return (int)(f * 16.0f) & 0xFFF;
}
