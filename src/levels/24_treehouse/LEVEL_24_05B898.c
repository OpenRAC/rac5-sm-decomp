/* LEVEL_24:0x05B898 -- placement copy of LEVEL_01_062248.c: adds an input to a stored float, clamps the sum between zero and a limit, stores it back. */
struct S2248 {
    char pad0[0x130];
    float f130;
};

extern struct S2248 D_00204E78;

void func_05B898(float x)
{
    float g;
    float h;
    float t;
    float w;

    if (x < 0.0f) {
        x = 180.0f;
    }
    g = D_00204E78.f130 + x;
    h = g + __builtin_fabsf(g);
    t = 1200.0f - h;
    w = (h + 1200.0f) - __builtin_fabsf(t);
    D_00204E78.f130 = w * 0.25f;
}
