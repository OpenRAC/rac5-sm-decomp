typedef struct {
    char  pad[0xF60];
    float fF60;
} Obj;

extern float D_00222B48;

float func_06BBA8(Obj *o)
{
    return o->fF60 - D_00222B48;
}
