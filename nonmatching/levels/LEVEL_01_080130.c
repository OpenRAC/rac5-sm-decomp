/* LEVEL_01.REL:0x080130: reviewed 1072-byte candidate, held for ABI review.
 * Draws a marker for every nearby flagged entry in the two entity lists.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 1072/1072 bytes and is byte-
 * exact at this and 14 other USA placements, but the prototypes disagree.
 * It declares func_0A5858 returning void with (int), but the accepted
 * FRONTEND_001E08.c defines it returning void with no arguments.
 * It declares func_110D08 returning pointer with no arguments, but the
 * accepted LEVEL_01_110D08.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern unsigned char D_001F61E8;
extern Ent *D_001F6160;
extern Ent *D_001F6164;
extern float D_001F61E4;
extern int D_001F62DC;
extern char gRT_AuxBuffer[];

extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void Gum_PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void Gum_LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern int func_0A0950(int a);
extern void func_0A0928(int a);
extern void func_0A0908(int a);
extern void func_0A0AA0(float a, float b);
extern void func_0A5858(int a);
extern void func_0A0BC0(int a);
extern void func_0A0BC8(int a, int b, int c, int d, int e);
extern unsigned func_111600(V3 *p, float *t);
extern HitTbl *func_110D08(void);
extern void func_0A2F20(int a);
extern void func_0A1ED8(int a);
extern void func_07FB80(V3 *p, V3 *n, int k, float f);
extern int func_07F908(struct Ent *e, float f, int k);
extern void func_0A5CC8(char *b, int k);
extern void func_0A1C30(void);
extern void func_001228(void);
extern void func_0A2110(int a, int b);

void func_080130(V3 *p, float r)
{
    V3 c0 = *p;
    V3 *c = &c0;
    V3 q;
    float t;
    unsigned pass;
    int fl;
    Ent *e;
    Hit *h;

    if (!D_001F61E8)
        D_001F61E8 = 1;
    r = r * r;
    fl = func_0A0950(7) != 0;
    func_0A0928(7);
    Gum_MatrixMode(2);
    Gum_PushMatrix();
    Gum_LoadIdentity();
    Gum_UpdateMatrix();
    func_0A0AA0(1.0f, 1.0f);
    func_0A5858(255);
    func_0A0BC0(1);
    func_0A0928(5);
    func_0A0928(0);
    func_0A0908(9);
    func_0A0908(1);
    func_0A0908(4);
    func_0A0BC8(0, 2, 3, 0, 0);
    func_0A0928(10);

    for (pass = 0; pass < 2; pass++) {
        e = D_001F6160;
        if (pass == 1)
            e = D_001F6164;
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
                i = func_111600(&q, &t);
                if (i == 0xFFFFFFFF)
                    continue;
                h = func_110D08()->hits + i;
                {
                    float k = t * D_001F61E4;
                    q.x -= h->n.x * k;
                    q.y -= h->n.y * k;
                    q.z -= h->n.z * k;
                }
                if (h && t < 2.0f) {
                    int s = e->u.h.sub & 0xF;
                    switch (s) {
                    case 1:
                        func_0A2F20(D_001F62DC);
                        func_0A1ED8(1);
                        func_07FB80(&q, &h->n, 0x2F, e->hdr->parts[e->idx].m->f38);
                        func_0A1ED8(0);
                        break;
                    case 2:
                        if (func_07F908(e, 0.6f, 0x4F)) {
                            func_0A5CC8(gRT_AuxBuffer, 1);
                            Gum_UpdateMatrix();
                            func_0A1C30();
                            Gum_MatrixMode(2);
                            Gum_PushMatrix();
                            Gum_LoadIdentity();
                            Gum_UpdateMatrix();
                            func_001228();
                            func_0A1C30();
                            func_0A2110(1, 2);
                            func_0A1ED8(1);
                            func_07FB80(&q, &h->n, 0x1F, e->hdr->parts[e->idx].m->f38);
                            func_0A1ED8(0);
                            Gum_MatrixMode(2);
                            Gum_PopMatrix();
                        }
                    }
                }
            }
        }
    }
    if (fl)
        func_0A0908(7);
    Gum_MatrixMode(2);
    Gum_PopMatrix();
    Gum_UpdateMatrix();
    func_0A0908(5);
    func_0A0908(1);
}
