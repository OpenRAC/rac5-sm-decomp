/* LEVEL_22:0x000580 -- reads the field of whatever the lookup returns. */
typedef struct {
    char pad[0x10];
    float f_10;
} Obj;

extern Obj *D_00187310;
extern Obj *func_0006B0(Obj *a0);

float func_000580(void)
{
    return func_0006B0(D_00187310)->f_10;
}
