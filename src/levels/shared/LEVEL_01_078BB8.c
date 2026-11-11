struct S {
    float *p;
    float y;
    float z;
    char pad0C[0x14];
    int f20;
};

void func_078BB8(struct S *s)
{
    float a = s->y - *s->p;

    if (a > 3.14159265f)
        a -= 6.28318531f;
    else if (a < -3.14159265f)
        a += 6.28318531f;
    s->y = a;

    if (s->f20 != 0) {
        float b = s->z + s->p[1];

        if (b > 3.14159265f)
            b -= 6.28318531f;
        else if (b < -3.14159265f)
            b += 6.28318531f;
        s->z = b;
    }
}
