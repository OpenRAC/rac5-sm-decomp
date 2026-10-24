/* LEVEL_24.REL:0x000580 -- reads one field of the object behind D_201610 after
   func_0006B0. */
typedef struct {
    char pad_00[0x10];
    float f_10;
} Obj;

extern Obj *D_201610;
extern Obj *func_0006B0(void *);

float func_000580(void)
{
    return func_0006B0(D_201610)->f_10;
}
