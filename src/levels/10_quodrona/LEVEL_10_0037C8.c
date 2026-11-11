/* LEVEL_10:0x0037C8 -- returns one field of the current context. */
typedef struct {
    char pad[0x78];
    float f_78;
} Obj;

extern Obj *D_1F8254;

float func_0037C8(void)
{
    return D_1F8254->f_78;
}
