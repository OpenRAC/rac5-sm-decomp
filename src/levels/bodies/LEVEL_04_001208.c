/* LEVEL_04:0x001208 -- returns one field of the current context. */
typedef struct {
    char pad[0xFC];
    float f_FC;
} Obj;

extern Obj *D_2083C8;

float func_001208(void)
{
    return D_2083C8->f_FC;
}
