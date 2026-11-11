/* LEVEL_08:0x1B3DD8 -- copies the position of the object's linked actor, raised by 32.0 in z, into the first output vector and a second copy of it into the second one; returns 0 when the object has no linked actor. */
int func_1B3DD8(float *a, float *b, char *object)
{
    char *source = *(char **)(*(char **)(object + 0x54) + 0xC);
    float *p;
    float x;

    if (source == 0)
        return 0;
    p = (float *)(source + 0x30);
    x = p[0];
    a[0] = x;
    a[1] = p[1];
    a[2] = p[2] + 32.0f;
    b[0] = x;
    b[1] = a[1];
    b[2] = a[2];
    return 1;
}
