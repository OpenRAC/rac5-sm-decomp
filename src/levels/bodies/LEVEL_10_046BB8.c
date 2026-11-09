/* LEVEL_10:0x046BB8 -- placement copy of LEVEL_01_0484B0.c: turns stick and button input into movement axes and updates the control-active flag. */
typedef struct {
    char pad0[0x24];
    int mode;
} Input;

typedef struct {
    char pad0[0x100];
    short state;
    char pad102[0x392 - 0x102];
    char b392;
    char pad393[0x960 - 0x393];
    unsigned long long flags;
} Obj;

extern Input *D_001FCFAC;
extern float fabsf(float);

extern float func_035E38(int);
extern int func_0885C0(int);
extern int func_0885F8(int);
extern int func_035DD8(Obj *);
extern void func_046920(Obj *, int, float, float);

void func_046BB8(Obj *obj, int a1, int a2, int a3, int in)
{
    float x, y;
    unsigned long long was;
    int m;
    unsigned long long now;

    x = func_035E38(a2);
    y = func_035E38(a3);
    was = (obj->flags >> 52) & 1;
    if (obj->state != 0x48) {
        if (func_0885C0(in))
            x = 1.0f;
        else if (func_0885F8(in))
            x = -1.0f;
        if (in & 0x10)
            y = 1.0f;
        else if (in & 0x40)
            y = -1.0f;
        m = D_001FCFAC->mode == 2;
        if ((in & 0xC00) != 0 || m) {
            obj->flags |= 1ULL << 52;
        } else if (fabsf(x) > 0.01f || fabsf(y) > 0.01f) {
            obj->flags &= ~(1ULL << 52);
        }
    }
    if (func_035DD8(obj) == 0 || obj->state == 1)
        obj->flags &= ~(1ULL << 52);
    if (was == 0) {
        now = (obj->flags >> 52) & 1;
        if (now)
            obj->b392 = 0;
    }
    func_046920(obj, a1, x, y);
}
