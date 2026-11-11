typedef struct {
    char pad[0x70];
    float f70;
} S;

void func_07CCA0(S *s, int v);

void func_1A3230(S *s, float d)
{
    float t = s->f70 - d;

    s->f70 = t;
    if (t <= 0.0f) {
        func_07CCA0(s, 1);
    }
}
