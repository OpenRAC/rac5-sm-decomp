void func_104CA0(void *p);

void func_105398(char *a0, int a1)
{
    *(float *)((char *)a0 + (a1 << 3) + 0x3FC) = 0.033333335f;
    func_104CA0((char *)a0 + (a1 * 20 + 0x408));
}
