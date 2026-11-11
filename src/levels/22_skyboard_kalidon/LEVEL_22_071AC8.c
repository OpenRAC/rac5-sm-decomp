/* LEVEL_22:0x071AC8 -- placement copy of LEVEL_01_07F0F0.c: draws an object's attached model under its matrix with a uniform scale, or forwards to the simple path when it has no model. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[8];
    float f8;
    float fC;
    float f10;
} Scl;

typedef struct {
    char pad0[0x1C];
    Scl *scl;
} Mdl;

typedef struct {
    char pad0[4];
    Mdl *mdl;
    char pad1[0x2C];
} Ent;

typedef struct {
    char pad0[4];
    Ent *tab;
} Set;

typedef struct {
    char pad0[0xC];
    int wC;
} Aux;

typedef struct {
    char pad0[0x30];
    char mat[0x10];
    Set *set;
    unsigned char idx;
    char pad1[3];
    Aux *aux;
    char pad2[4];
    void *p50;
    char pad3[0x20];
    unsigned short h74;
} Obj;

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadMatrix(void *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC14ScePspFMatrix4");
extern void Gum_Scale(Vec3 *v) __asm__("Scale__Q34scee3Psp3GumPC14ScePspFVector3");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void *memset(void *p, int c, unsigned n);

extern int *D_00165D70;
extern void func_08F118(float a, float b);
extern void func_07DD10(int a);
extern void func_07DF50(int a, int b, int c, int d);
extern void func_079768(Mdl *m, void *p50, int w, int a3, int a4, int a5, int a6, int a7, float f0, float f1, float f2);
extern void func_076F08(Obj *o, Mdl *m, int a, int b, int c, int d, int e);

int func_071AC8(Obj *o, int unused, int s3, int s4)
{
    Vec3 b;
    Vec3 a;
    Scl *s;
    int w;

    if (!o)
        return 0;
    if (o->aux) {
        if (o->p50) {
            Gum_MatrixMode(2);
            Gum_PushMatrix();
            Gum_LoadMatrix(o);
            s = o->set->tab[o->idx].mdl->scl;
            memset(&a, 0, sizeof(a));
            a.x = s->f10;
            a.y = s->f10;
            a.z = s->f10;
            b = a;
            Gum_Scale(&b);
            func_08F118(s->f8, -s->fC);
            func_07DD10(*D_00165D70);
            func_07DF50((int)((char *)o + 0x30), 2, 0, 0);
            w = o->h74;
            if (s3 >= 0)
                w = s3;
            func_079768(o->set->tab[o->idx].mdl, o->p50, o->aux->wC, w, 1, 0, s4, 0, 0.0f, 0.0f, 0.125f);
            Gum_PopMatrix();
            Gum_UpdateMatrix();
            return 1;
        }
        return 0;
    }
    func_076F08(o, o->set->tab[o->idx].mdl, 0, ~o->h74 & 0xFFFF, 1, 0, 1);
    return 1;
}
