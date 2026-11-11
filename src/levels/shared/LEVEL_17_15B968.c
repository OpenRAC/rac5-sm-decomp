/* LEVEL_17:0x15B968 -- returns a float field of the object's linked record. */
typedef struct {
    char pad00[0x28];
    float f28;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

float func_15B968(Obj *o)
{
    return o->rec->f28;
}
