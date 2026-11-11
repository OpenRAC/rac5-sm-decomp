/* LEVEL_23:0x077530 -- placement copy of LEVEL_01_080130.c: draws a marker for every nearby flagged entry in the two entity lists. */
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

extern unsigned char D_001C95E8;
extern Ent *D_001C9560;
extern Ent *D_001C9564;
extern float D_001C95E4;
extern int D_001C96DC;
extern char gRT_AuxBuffer[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern int func_097698(int a);
extern void func_097670(int a);
extern void func_097650(int a);
extern void func_0977E0(float a, float b);
extern void func_09C598(int a);
extern void func_097900(int a);
extern void func_097908(int a, int b, int c, int d, int e);
extern unsigned func_103E28(V3 *p, float *t);
extern HitTbl *func_103530(void);
extern void func_099C60(int a);
extern void func_098C18(int a);
extern void func_076F80(V3 *p, V3 *n, int k, float f);
extern int func_076D08(struct Ent *e, float f, int k);
extern void func_09CA08(char *b, int k);
extern void func_098970(void);
extern void func_001228(void);
extern void func_098E50(int a, int b);

void func_077530(V3 *p, float r)
{
    V3 c0 = *p;
    V3 *c = &c0;
    V3 q;
    float t;
    unsigned pass;
    int fl;
    Ent *e;
    Hit *h;

    if (!D_001C95E8)
        D_001C95E8 = 1;
    r = r * r;
    fl = func_097698(7) != 0;
    func_097670(7);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadIdentity();
    Gum_UpdateMatrix();
    func_0977E0(1.0f, 1.0f);
    func_09C598(255);
    func_097900(1);
    func_097670(5);
    func_097670(0);
    func_097650(9);
    func_097650(1);
    func_097650(4);
    func_097908(0, 2, 3, 0, 0);
    func_097670(10);

    for (pass = 0; pass < 2; pass++) {
        e = D_001C9560;
        if (pass == 1)
            e = D_001C9564;
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
                i = func_103E28(&q, &t);
                if (i == 0xFFFFFFFF)
                    continue;
                h = func_103530()->hits + i;
                {
                    float k = t * D_001C95E4;
                    q.x -= h->n.x * k;
                    q.y -= h->n.y * k;
                    q.z -= h->n.z * k;
                }
                if (h && t < 2.0f) {
                    int s = e->u.h.sub & 0xF;
                    switch (s) {
                    case 1:
                        func_099C60(D_001C96DC);
                        func_098C18(1);
                        func_076F80(&q, &h->n, 0x2F, e->hdr->parts[e->idx].m->f38);
                        func_098C18(0);
                        break;
                    case 2:
                        if (func_076D08(e, 0.6f, 0x4F)) {
                            func_09CA08(gRT_AuxBuffer, 1);
                            Gum_UpdateMatrix();
                            func_098970();
                            Gum_MatrixMode(2);
                            Gum_PushMatrix();
                            Gum_LoadIdentity();
                            Gum_UpdateMatrix();
                            func_001228();
                            func_098970();
                            func_098E50(1, 2);
                            func_098C18(1);
                            func_076F80(&q, &h->n, 0x1F, e->hdr->parts[e->idx].m->f38);
                            func_098C18(0);
                            Gum_MatrixMode(2);
                            Gum_PopMatrix();
                        }
                    }
                }
            }
        }
    }
    if (fl)
        func_097650(7);
    Gum_MatrixMode(2);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_097650(5);
    func_097650(1);
}
