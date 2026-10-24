extern void func_07A880(void *a0, int a1, int a2);

void func_079F38(char *a0, char *a1, float v)
{
    *(int *)(a1 + 0x20) &= 0xFFFFFFFB;
    *(char **)(a0 + 0x14) = a1;
    *(char *)(a1 + 0x24) = 0;
    *(int *)(*(char **)(a0 + 0x14) + 0x14) = 2;
    *(float *)(*(char **)(a0 + 0x14) + 8) = v;
    *(int *)(a0 + 4) = 0;
    *(int *)(a0 + 0x18) = 0;
    func_07A880(a1, 0, 0);
}
