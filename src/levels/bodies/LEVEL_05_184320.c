void func_184320(char *a0)
{
    float f;

    if (*(unsigned char *)(a0 + 0x44)) {
        f = *(float *)(a0 + 0x40) + 0.3f;
        *(float *)(a0 + 0x40) = f;
        if (f >= 1.0f)
            *(unsigned char *)(a0 + 0x44) = 0;
    } else {
        f = *(float *)(a0 + 0x40) - 0.3f;
        *(float *)(a0 + 0x40) = f;
        if (f <= 0.0f)
            *(unsigned char *)(a0 + 0x44) = 1;
    }
}
