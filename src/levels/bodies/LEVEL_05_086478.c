extern void func_086DC0(void *a0, int a1, int a2);

void func_086478(char *a0, char *a1, float v)
{
    *(int *)(a1 + 0x20) &= 0xFFFFFFFB;
    *(char **)(a0 + 0x14) = a1;
    *(char *)(a1 + 0x24) = 0;
    *(int *)(*(char **)(a0 + 0x14) + 0x14) = 2;
    *(float *)(*(char **)(a0 + 0x14) + 8) = v;
    *(int *)(a0 + 4) = 0;
    *(int *)(a0 + 0x18) = 0;
    func_086DC0(a1, 0, 0);
}
