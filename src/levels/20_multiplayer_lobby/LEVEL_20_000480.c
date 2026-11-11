/* LEVEL_20:0x000480 -- reads the level of the record the global handle
   resolves to. */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x10];
    float f10;
} Rec;

extern Rec *D_0013BFE0;
extern Obj *func_0005B0(Rec *);

float func_000480(void)
{
    return ((Rec *)func_0005B0(D_0013BFE0))->f10;
}
