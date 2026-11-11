/* LEVEL_05:0x15E670 -- releases the level's moving platform. */
typedef struct {
    char pad[0x64];
    float f64;
    int i68;
} Obj;

extern Obj *func_15E700(void *value);
extern void func_15E0E0(void *a0);

void func_15E670(void *a0)
{
    Obj *s0 = func_15E700(a0);

    if (s0 != 0) {
        func_15E0E0(a0);
        s0->i68 = 0;
        s0->f64 = -1.0f;
    }
}
