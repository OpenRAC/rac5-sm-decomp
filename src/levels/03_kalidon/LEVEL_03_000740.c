/* LEVEL_03.REL:0x000740 -- answers the reading of the current record. */
typedef struct {
    char pad0[0x10];
    float f_10;
} Rec;

extern Rec *D_00250590;

Rec *func_0008A8(Rec *a0);

float func_000740(void)
{
    return func_0008A8(D_00250590)->f_10;
}
