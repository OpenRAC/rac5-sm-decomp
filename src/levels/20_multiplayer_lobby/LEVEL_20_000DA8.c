/* LEVEL_20:0x000DA8 -- reads the current object's field. */
typedef struct {
    char pad[0x10C];
    float f_10C;
} Obj;

extern Obj *D_000FD3B4;

float func_000DA8(void)
{
    return D_000FD3B4->f_10C;
}
