/* LEVEL_10:0x013CB8 -- placement copy of LEVEL_05_0141D8.c: round-trips two floats of the object through a local buffer, then stores a copy and a negated value. */

struct Pair0141D8 {
    float a;
    float b;
};

extern void func_013850(float *a0);

void func_013CB8(char *a0)
{
    char *o;
    struct Pair0141D8 buf;
    float *q;
    float t;

    o = a0;
    q = (float *)(o + 0x20);
    t = q[0];
    buf.a = t;
    t = q[2];
    buf.b = t;
    func_013850(&buf.a);
    q[0] = buf.a;
    q[2] = buf.b;
    *(int *)(o + 0x4) = 0;
    *(float *)o = *(float *)(o + 0x28);
    *(float *)(o + 0x8) = -q[0];
}
