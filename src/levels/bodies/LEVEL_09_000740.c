/* LEVEL_09.REL:0x000740 -- reads one float of the record the helper
   returns. */
typedef struct {
    char pad[0x10];
    float f_10;
} Obj;

extern Obj *D_0021CE90;

Obj *func_0008A8(Obj *a0);

float func_000740(void)
{
    return func_0008A8(D_0021CE90)->f_10;
}
