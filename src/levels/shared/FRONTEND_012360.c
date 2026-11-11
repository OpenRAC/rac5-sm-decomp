/* FRONTEND:0x012360 -- writes the two float arguments into the vector. */
int func_012360(float *p, float x, float y)
{
    p[0x10] = x;
    p[0x11] = y;
    return 1;
}
