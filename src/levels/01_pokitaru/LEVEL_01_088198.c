extern int func_02A3F0(int a0);

float func_088198(char *a0)
{
    if (func_02A3F0(4) != 0) {
        return -*(float *)(a0 + 0x30);
    }
    return *(float *)(a0 + 0x30);
}
