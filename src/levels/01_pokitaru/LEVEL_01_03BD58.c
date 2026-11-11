typedef struct {
    char pad[0x568];
    float f568;
} S;

int func_03BD08(S *s);

float func_03BD58(S *s)
{
    return func_03BD08(s) ? s->f568 : 0.0f;
}
