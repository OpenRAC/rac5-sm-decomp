typedef struct {
    char pad[0xF8];
    float fF8;
} Obj;

extern Obj *D_001DE148;

float func_0013D8(void)
{
    return D_001DE148->fF8;
}
