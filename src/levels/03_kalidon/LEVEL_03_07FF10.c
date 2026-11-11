/* LEVEL_03:0x07FF10 -- placement copy of LEVEL_01_080130.c: draws a marker for every nearby flagged entry in the two entity lists. */
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

extern unsigned char D_0020E868;
extern Ent *D_0020E7E0;
extern Ent *D_0020E7E4;
extern float D_0020E864;
extern int D_0020E95C;
extern char gRT_AuxBuffer[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern int func_0A06D8(int a);
extern void func_0A06B0(int a);
extern void func_0A0690(int a);
extern void func_0A0820(float a, float b);
extern void func_0A55D8(int a);
extern void func_0A0940(int a);
extern void func_0A0948(int a, int b, int c, int d, int e);
extern unsigned func_10F770(V3 *p, float *t);
extern HitTbl *func_10E9D0(void);
extern void func_0A2CA0(int a);
extern void func_0A1C58(int a);
extern void func_07F960(V3 *p, V3 *n, int k, float f);
extern int func_07F6E8(struct Ent *e, float f, int k);
extern void func_0A5A48(char *b, int k);
extern void func_0A19B0(void);
extern void func_001250(void);
extern void func_0A1E90(int a, int b);

void func_07FF10(V3 *p, float r)
{
    V3 c0 = *p;
    V3 *c = &c0;
    V3 q;
    float t;
    unsigned pass;
    int fl;
    Ent *e;
    Hit *h;

    if (!D_0020E868)
        D_0020E868 = 1;
    r = r * r;
    fl = func_0A06D8(7) != 0;
    func_0A06B0(7);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadIdentity();
    Gum_UpdateMatrix();
    func_0A0820(1.0f, 1.0f);
    func_0A55D8(255);
    func_0A0940(1);
    func_0A06B0(5);
    func_0A06B0(0);
    func_0A0690(9);
    func_0A0690(1);
    func_0A0690(4);
    func_0A0948(0, 2, 3, 0, 0);
    func_0A06B0(10);

    for (pass = 0; pass < 2; pass++) {
        e = D_0020E7E0;
        if (pass == 1)
            e = D_0020E7E4;
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
                i = func_10F770(&q, &t);
                if (i == 0xFFFFFFFF)
                    continue;
                h = func_10E9D0()->hits + i;
                {
                    float k = t * D_0020E864;
                    q.x -= h->n.x * k;
                    q.y -= h->n.y * k;
                    q.z -= h->n.z * k;
                }
                if (h && t < 2.0f) {
                    int s = e->u.h.sub & 0xF;
                    switch (s) {
                    case 1:
                        func_0A2CA0(D_0020E95C);
                        func_0A1C58(1);
                        func_07F960(&q, &h->n, 0x2F, e->hdr->parts[e->idx].m->f38);
                        func_0A1C58(0);
                        break;
                    case 2:
                        if (func_07F6E8(e, 0.6f, 0x4F)) {
                            func_0A5A48(gRT_AuxBuffer, 1);
                            Gum_UpdateMatrix();
                            func_0A19B0();
                            Gum_MatrixMode(2);
                            Gum_PushMatrix();
                            Gum_LoadIdentity();
                            Gum_UpdateMatrix();
                            func_001250();
                            func_0A19B0();
                            func_0A1E90(1, 2);
                            func_0A1C58(1);
                            func_07F960(&q, &h->n, 0x1F, e->hdr->parts[e->idx].m->f38);
                            func_0A1C58(0);
                            Gum_MatrixMode(2);
                            Gum_PopMatrix();
                        }
                    }
                }
            }
        }
    }
    if (fl)
        func_0A0690(7);
    Gum_MatrixMode(2);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_0A0690(5);
    func_0A0690(1);
}
