extern void *memset(void *, int, unsigned int);

void func_016000(int *p)
{
    p[24] = 0;
    p[25] = 0;
    p[26] = 0;
    memset(p, 0, 0x60);
}
