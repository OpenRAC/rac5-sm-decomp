typedef struct {
    char pad[0xF8];
    float fF8;
} S;

extern S *D_002078C8;

float func_001400(void)
{
    return D_002078C8->fF8;
}
