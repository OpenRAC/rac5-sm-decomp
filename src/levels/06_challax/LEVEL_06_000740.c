/* LEVEL_06.REL:0x000740 -- reads one field of the object behind D_222490 after
   func_0008A8. */
typedef struct {
    char pad_00[0x10];
    float f_10;
} Obj;

extern Obj *D_222490;
extern Obj *func_0008A8(void *);

float func_000740(void)
{
    return func_0008A8(D_222490)->f_10;
}
