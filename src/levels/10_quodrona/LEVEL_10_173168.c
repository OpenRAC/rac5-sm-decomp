/* LEVEL_10:0x173168 -- divides a helper's float result for the object's first word by the table float selected by the index. */
typedef struct { float f; char pad04[8]; } Ent;
typedef struct { void *first; } Obj;
extern Ent D_0022A4E8[];
extern float func_07D040(void *first, unsigned int index);

float func_173168(Obj *o, unsigned int index)
{
    float d = D_0022A4E8[index].f;

    return func_07D040(o->first, index) / d;
}
