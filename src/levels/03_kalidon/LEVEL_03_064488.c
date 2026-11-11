extern int func_04BCD0(int a, int b, int c, int d, float e, float f);

void func_06AB98(int p, int q)
{
    if (func_04BCD0(p, 0x39, 0, 1, 0.1f, 0.0f) != 0) {
        *(float *)(*(int *)(*(int *)(p + 0x59C) + 0x48) + 8) = 2.0f;
    }
    *(int *)(p + 0xB8C) = q;
    *(char *)(p + 0xBC8) = 0;
    *(char *)(p + 0xBC9) = 0;
    *(int *)(p + 0xB78) = 0;
    *(short *)(p + 0x108) = 1;
    *(short *)(p + 0x10A) = 1;
    *(int *)(*(int *)(*(int *)(p + 0x5A4) + 0x48) + 0xDC) = 0;
    *(int *)(*(int *)(*(int *)(p + 0x5A4) + 0x48) + 0xE4) = p;
    *(float *)(p + 0xB90) = 0.0f;
    *(float *)(p + 0xB94) = 0.0f;
}
