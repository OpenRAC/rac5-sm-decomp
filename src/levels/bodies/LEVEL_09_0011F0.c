/* LEVEL_09:0x0011F0 -- returns one field of the current context. */
typedef struct {
    char pad[0x10C];
    float f_10C;
} Obj;

extern Obj *D_1D9048;

float func_0011F0(void)
{
    return D_1D9048->f_10C;
}
