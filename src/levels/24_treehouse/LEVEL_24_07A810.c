/* LEVEL_24:0x07A810 -- placement copy of LEVEL_01_080130.c: draws a marker for every nearby flagged entry in the two entity lists. */
typedef struct V3 { float x, y, z; } V3;
typedef struct Mdl { unsigned char pad00[0x38]; float f38; } Mdl;
typedef struct Part { unsigned char pad00[4]; Mdl *m; unsigned char pad08[0x2C]; } Part;
typedef struct Hdr { unsigned char pad00[4]; Part *parts; } Hdr;
typedef struct Ent {
    unsigned char pad00[0x30];
    V3 pos;
    unsigned char pad3C[4];
    Hdr *hdr;
    unsigned char idx;
    unsigned char pad45[7];
    struct Ent *next;
    unsigned char pad50[0x14];
    unsigned flags;
    unsigned char pad68[0x10];
    union { unsigned kind; struct { unsigned short lo; unsigned short sub; } h; } u;
} Ent;
typedef struct Hit {
    unsigned char pad00[8];
    V3 n;
    unsigned char pad14[0x38];
} Hit;
typedef struct HitTbl {
    unsigned char pad00[0xC];
    Hit *hits;
} HitTbl;

extern unsigned char D_001C6E68;
extern Ent *D_001C6DE0;
extern Ent *D_001C6DE4;
extern float D_001C6E64;
extern int D_001C6F5C;
extern char gRT_AuxBuffer[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern int func_09A1D0(int a);
extern void func_09A1A8(int a);
extern void func_09A188(int a);
extern void func_09A318(float a, float b);
extern void func_09F0D0(int a);
extern void func_09A438(int a);
extern void func_09A440(int a, int b, int c, int d, int e);
extern unsigned func_108600(V3 *p, float *t);
extern HitTbl *func_107D08(void);
extern void func_09C798(int a);
extern void func_09B750(int a);
extern void func_07A260(V3 *p, V3 *n, int k, float f);
extern int func_079FE8(struct Ent *e, float f, int k);
extern void func_09F540(char *b, int k);
extern void func_09B4A8(void);
extern void func_001030(void);
extern void func_09B988(int a, int b);

void func_07A810(V3 *p, float r)
{
    V3 c0 = *p;
    V3 *c = &c0;
    V3 q;
    float t;
    unsigned pass;
    int fl;
    Ent *e;
    Hit *h;

    if (!D_001C6E68)
        D_001C6E68 = 1;
    r = r * r;
    fl = func_09A1D0(7) != 0;
    func_09A1A8(7);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadIdentity();
    Gum_UpdateMatrix();
    func_09A318(1.0f, 1.0f);
    func_09F0D0(255);
    func_09A438(1);
    func_09A1A8(5);
    func_09A1A8(0);
    func_09A188(9);
    func_09A188(1);
    func_09A188(4);
    func_09A440(0, 2, 3, 0, 0);
    func_09A1A8(10);

    for (pass = 0; pass < 2; pass++) {
        e = D_001C6DE0;
        if (pass == 1)
            e = D_001C6DE4;
        for (; e; e = e->next) {
            if ((e->flags & 0x21) != 1)
                continue;
            if ((e->u.kind & 0xF0000) != 0x10000 && (e->u.kind & 0xF0000) != 0x20000)
                continue;
            q = e->pos;
            q.y += 0.01f;
            if ((q.x - c->x) * (q.x - c->x) + (q.y - c->y) * (q.y - c->y) + (q.z - c->z) * (q.z - c->z) < r) {
                unsigned i;
                t = 0.0f;
                i = func_108600(&q, &t);
                if (i == 0xFFFFFFFF)
                    continue;
                h = func_107D08()->hits + i;
                {
                    float k = t * D_001C6E64;
                    q.x -= h->n.x * k;
                    q.y -= h->n.y * k;
                    q.z -= h->n.z * k;
                }
                if (h && t < 2.0f) {
                    int s = e->u.h.sub & 0xF;
                    switch (s) {
                    case 1:
                        func_09C798(D_001C6F5C);
                        func_09B750(1);
                        func_07A260(&q, &h->n, 0x2F, e->hdr->parts[e->idx].m->f38);
                        func_09B750(0);
                        break;
                    case 2:
                        if (func_079FE8(e, 0.6f, 0x4F)) {
                            func_09F540(gRT_AuxBuffer, 1);
                            Gum_UpdateMatrix();
                            func_09B4A8();
                            Gum_MatrixMode(2);
                            Gum_PushMatrix();
                            Gum_LoadIdentity();
                            Gum_UpdateMatrix();
                            func_001030();
                            func_09B4A8();
                            func_09B988(1, 2);
                            func_09B750(1);
                            func_07A260(&q, &h->n, 0x1F, e->hdr->parts[e->idx].m->f38);
                            func_09B750(0);
                            Gum_MatrixMode(2);
                            Gum_PopMatrix();
                        }
                    }
                }
            }
        }
    }
    if (fl)
        func_09A188(7);
    Gum_MatrixMode(2);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_09A188(5);
    func_09A188(1);
}
