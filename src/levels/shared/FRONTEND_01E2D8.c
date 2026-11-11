/* FRONTEND:0x01E2D8 -- clears the first two words and sets the third. */
void func_01E2D8(unsigned int *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0xFFFFFFFF;
}
