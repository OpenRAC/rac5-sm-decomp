/* LEVEL_18.REL:0x159CE0 -- answers the reach carried by the sub-object. */
typedef struct {
    char pad0[0x168];
    float f_168;
} Sub;

typedef struct {
    char pad0[0x58];
    Sub *p_58;
} Obj;

float func_159CE0(Obj *a0)
{
    return a0->p_58->f_168;
}
