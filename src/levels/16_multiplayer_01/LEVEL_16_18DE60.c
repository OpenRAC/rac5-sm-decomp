typedef struct {
    char pad[0x70];
    float f70;
} S;

extern float D_001E062C;

void func_06F940(S *s, int v);

int func_18DE60(S *s)
{
    float t = s->f70 + D_001E062C;

    s->f70 = t;
    if (t > 5.0f) {
        func_06F940(s, 1);
        return 1;
    }
    return 0;
}
