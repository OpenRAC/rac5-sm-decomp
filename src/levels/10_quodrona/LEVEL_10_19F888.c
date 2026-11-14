/* LEVEL_10:0x19F888 -- initialises the linked record's transform from the object (position and basis vector, unit scale) and returns 1 after clearing the record's state word. */
typedef struct { float f00, f04, f08, f0C, f10, f14, f18; int f1C; } S;
typedef struct Rec { char pad00[0x40]; char f40[1]; char pad41[0x53]; int w94; } Rec;
typedef struct Obj { float f00, f04, f08; char pad0C[0x24]; float pos[3]; char pad3C[0x1C]; Rec *f58; } Obj;
extern int D_0021181C;
extern char D_0022E5C0[];
extern void func_0ECA98(void *a0, void *a1, void *a2);
extern void func_0ECB38(void *a0, S *a1, int a2);
static __inline__ void Copy3(float *d, float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }
int func_19F888(Obj *o)
{
    Rec *r = o->f58;
    S s;
    func_0ECA98(r->f40, (void *)D_0021181C, D_0022E5C0);
    Copy3(&s.f00, o->pos);
    Copy3(&s.f0C, &o->f00);
    s.f18 = 1.0f;
    s.f1C = 0;
    func_0ECB38(r->f40, &s, 0);
    r->w94 = 0;
    return 1;
}
