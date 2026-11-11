/* LEVEL_10.REL:0x19C618 -- measures the distance of the object to the plane
   of the current record and starts the reaction when it is close enough. */
typedef struct {
    char pad0[0x100];
    float f_100;
    float f_104;
} Scale;

typedef struct {
    char pad0[0x30];
    float f_30;
    float f_34;
    float f_38;
    char pad1[0x58 - 0x3C];
    Scale *f_58;
} Obj;

typedef struct {
    char pad0[0x30];
    float f_30;
    float f_34;
    float f_38;
} Plane;

extern Plane D_0023E540;

void func_19B4E0(Obj *a0, int a1);

int func_19C618(Obj *a0)
{
    float dx = D_0023E540.f_30 - a0->f_30;
    float dy = D_0023E540.f_38 - a0->f_38;
    Scale *p = a0->f_58;
    float d = dx * p->f_100 + dy * p->f_104;

    if (d <= 3.0f) {
        func_19B4E0(a0, 4);
        return 1;
    }
    return 0;
}
