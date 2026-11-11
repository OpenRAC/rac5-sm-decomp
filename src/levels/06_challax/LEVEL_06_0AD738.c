/* LEVEL_06.REL:0x0AD738 -- records the caller's value in the indexed entry. */
typedef struct {
    char pad0[0x14];
    float f_14;
    char pad1[0x20 - 0x18];
} Ent;

extern Ent D_00314798[];

void func_0AD738(int i, float x)
{
    D_00314798[i].f_14 = x;
}
