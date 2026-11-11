typedef struct {
    char pad[0xFC];
    float fFC;
} S;

extern S *D_001BFEC8;

float func_001208(void)
{
    return D_001BFEC8->fFC;
}
