typedef struct {
    char pad[0xF8];
    float fF8;
} S;

extern S *D_002083C8;

float func_0011E0(void)
{
    return D_002083C8->fF8;
}
