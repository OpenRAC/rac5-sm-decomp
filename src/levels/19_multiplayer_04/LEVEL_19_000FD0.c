typedef struct {
    char pad[0xF8];
    float fF8;
} Obj;

extern Obj *D_0019BE4C;

float func_000FD0(void)
{
    return D_0019BE4C->fF8;
}
