/* LEVEL_24:0x154E68 -- releases the level's moving platform. */
typedef struct {
    char pad[0x64];
    float f64;
    int i68;
} Obj;

extern Obj *func_154EF8(void);
extern void func_1548D8(void *a0);

void func_154E68(void *a0)
{
    Obj *s0 = func_154EF8();

    if (s0 != 0) {
        func_1548D8(a0);
        s0->i68 = 0;
        s0->f64 = -1.0f;
    }
}
