typedef struct {
    char pad[0xFC];
    float fFC;
} Obj;

extern Obj *D_00143EB0;

float func_000F58(void)
{
    return D_00143EB0->fFC;
}
