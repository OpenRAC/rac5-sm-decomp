/* LEVEL_10:0x172D00 -- stores a mode byte; for mode 2 it copies a block of floats and sets a fixed height. */

void func_172D00(char *a0, unsigned char a1)
{
    char *p;
    float *s;
    float *d1;
    float *d2;

    p = *(char **)(a0 + 0x58);
    if (a1 == 2) {
        s = (float *)(a0 + 0x30);
        d1 = (float *)(p + 0x4);
        d2 = (float *)(p + 0x10);
        d1[0] = s[0];
        d1[1] = s[1];
        d1[2] = s[2];
        d2[0] = d1[0];
        d2[1] = d1[1];
        d2[2] = d1[2];
        *(float *)(p + 0x14) = *(float *)(*(char **)p + 0x34) + 4.0f;
        *(float *)(a0 + 0x70) = 30.0f;
    }
    *(unsigned char *)(a0 + 0x45) = a1;
}
