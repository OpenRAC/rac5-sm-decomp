/* LEVEL_07:0x082298 -- placement copy of LEVEL_01_080130.c: draws a marker for every nearby flagged entry in the two entity lists. */
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

extern unsigned char D_0020A4E8;
extern Ent *D_0020A460;
extern Ent *D_0020A464;
extern float D_0020A4E4;
extern int D_0020A5DC;
extern char gRT_AuxBuffer[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern int func_0A2958(int a);
extern void func_0A2930(int a);
extern void func_0A2910(int a);
extern void func_0A2AA0(float a, float b);
extern void func_0A7858(int a);
extern void func_0A2BC0(int a);
extern void func_0A2BC8(int a, int b, int c, int d, int e);
extern unsigned func_114650(V3 *p, float *t);
extern HitTbl *func_113D58(void);
extern void func_0A4F20(int a);
extern void func_0A3ED8(int a);
extern void func_081CE8(V3 *p, V3 *n, int k, float f);
extern int func_081A70(struct Ent *e, float f, int k);
extern void func_0A7CC8(char *b, int k);
extern void func_0A3C30(void);
extern void func_001228(void);
extern void func_0A4110(int a, int b);

void func_082298(V3 *p, float r)
{
    V3 c0 = *p;
    V3 *c = &c0;
    V3 q;
    float t;
    unsigned pass;
    int fl;
    Ent *e;
    Hit *h;

    if (!D_0020A4E8)
        D_0020A4E8 = 1;
    r = r * r;
    fl = func_0A2958(7) != 0;
    func_0A2930(7);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadIdentity();
    Gum_UpdateMatrix();
    func_0A2AA0(1.0f, 1.0f);
    func_0A7858(255);
    func_0A2BC0(1);
    func_0A2930(5);
    func_0A2930(0);
    func_0A2910(9);
    func_0A2910(1);
    func_0A2910(4);
    func_0A2BC8(0, 2, 3, 0, 0);
    func_0A2930(10);

    for (pass = 0; pass < 2; pass++) {
        e = D_0020A460;
        if (pass == 1)
            e = D_0020A464;
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
                i = func_114650(&q, &t);
                if (i == 0xFFFFFFFF)
                    continue;
                h = func_113D58()->hits + i;
                {
                    float k = t * D_0020A4E4;
                    q.x -= h->n.x * k;
                    q.y -= h->n.y * k;
                    q.z -= h->n.z * k;
                }
                if (h && t < 2.0f) {
                    int s = e->u.h.sub & 0xF;
                    switch (s) {
                    case 1:
                        func_0A4F20(D_0020A5DC);
                        func_0A3ED8(1);
                        func_081CE8(&q, &h->n, 0x2F, e->hdr->parts[e->idx].m->f38);
                        func_0A3ED8(0);
                        break;
                    case 2:
                        if (func_081A70(e, 0.6f, 0x4F)) {
                            func_0A7CC8(gRT_AuxBuffer, 1);
                            Gum_UpdateMatrix();
                            func_0A3C30();
                            Gum_MatrixMode(2);
                            Gum_PushMatrix();
                            Gum_LoadIdentity();
                            Gum_UpdateMatrix();
                            func_001228();
                            func_0A3C30();
                            func_0A4110(1, 2);
                            func_0A3ED8(1);
                            func_081CE8(&q, &h->n, 0x1F, e->hdr->parts[e->idx].m->f38);
                            func_0A3ED8(0);
                            Gum_MatrixMode(2);
                            Gum_PopMatrix();
                        }
                    }
                }
            }
        }
    }
    if (fl)
        func_0A2910(7);
    Gum_MatrixMode(2);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_0A2910(5);
    func_0A2910(1);
}
