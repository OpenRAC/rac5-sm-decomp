typedef struct {
    char pad[0x10C];
    float f10C;
} Obj;

extern Obj *D_00203548;

float func_0011F0(void)
{
    return D_00203548->f10C;
}
