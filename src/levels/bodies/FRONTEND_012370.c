/* FRONTEND:0x012370 -- stores two bytes in the object and reports success. */
int func_012370(unsigned char *p, unsigned char a, unsigned char b)
{
    p[0x4C] = a;
    p[0x4D] = b;
    return 1;
}
