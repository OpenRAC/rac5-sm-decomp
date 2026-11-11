typedef struct {
    char  pad[0xF60];
    float fF60;
} Obj;

extern float D_00222DC8;

float func_06FF38(Obj *o)
{
    return o->fF60 - D_00222DC8;
}
