/* LEVEL_02:0x0011F0 -- reads the current object's field. */
typedef struct {
    char pad[0x10C];
    float f_10C;
} Obj;

extern Obj *D_00203EC8;

float func_0011F0(void)
{
    return D_00203EC8->f_10C;
}
