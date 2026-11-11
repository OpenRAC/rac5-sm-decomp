/* LEVEL_15:0x06C878 -- two returns. */
typedef struct {
    char pad[0x30];
    float f_30;
} Obj;

extern int func_023BC8(int a0);

float func_06C878(Obj *a0)
{
    if (func_023BC8(4) != 0)
        return -a0->f_30;
    return a0->f_30;
}
