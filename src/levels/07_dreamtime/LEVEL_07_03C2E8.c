typedef struct {
    char pad[0x568];
    float f568;
} S;

int func_03C298(void *a0);

float func_03C2E8(S *a0)
{
    return func_03C298(a0) ? a0->f568 : 0.0f;
}
