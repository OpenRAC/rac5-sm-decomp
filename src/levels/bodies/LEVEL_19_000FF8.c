typedef struct {
    char pad[0xFC];
    float fFC;
} S;

extern S *D_0019BE4C;

float func_000FF8(void)
{
    return D_0019BE4C->fFC;
}
