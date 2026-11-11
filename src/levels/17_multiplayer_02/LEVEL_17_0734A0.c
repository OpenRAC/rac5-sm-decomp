/* LEVEL_17:0x0734A0 -- placement copy of LEVEL_16_072D70.c: draws effects for nearby list nodes within a radius of a point. */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct { float x, y, z; } Vec3;
typedef struct Node Node;
typedef struct { unsigned char pad00[4]; float f4; unsigned char pad08[0x38 - 8]; float f38; } Inner;
typedef struct { unsigned char pad00[4]; Inner *inner; } Slot;
typedef struct { unsigned char pad00[4]; u8 *slots; } Hdr;
struct Node {
    unsigned char pad00[0x30];
    Vec3 pos;
    unsigned char pad3C[4];
    Hdr *hdr;
    u8 slot;
    unsigned char pad45[7];
    Node *next;
    unsigned char pad50[0x64 - 0x50];
    u32 flags;
    unsigned char pad68[0x78 - 0x68];
    u32 kind;
};
typedef struct {
    unsigned char pad00[8];
    float x, y, z;
    unsigned char pad14[0x4C - 0x14];
} Entry;
typedef struct {
    unsigned char pad00[0xC];
    Entry *entries;
} Table;

extern u8 D_00197818;
extern Node *D_00197790;
extern Node *D_00197794;
extern float D_00197814;
extern int D_0019790C;
extern unsigned char gRT_AuxBuffer[];

extern int func_08F108(int);
extern void func_08F0E0(int);
extern void func_08F0C0(int);
extern void func_08F260(float, float);
extern void func_093EC0(int);
extern void func_08F380(int);
extern void func_08F388(int, int, int, int, int);
extern int func_0F1828(Vec3 *, float *);
extern u32 func_0F0F30(void);
extern void func_091678(int);
extern void func_090630(int);
extern void func_090868(int, int);
extern void func_072EF0(Vec3 *, void *, int, float);
extern int func_072C80(Node *, int, float);
extern void func_094300(void *, int);
extern void func_090388(void);
extern void func_000E20(void);
extern void MatrixMode(int) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

void func_0734A0(Vec3 center, float radius)
{
    Vec3 p;
    float t;
    Node *n;
    Entry *e;
    u32 pass;
    int saved, k;
    u32 idx;
    float dx, dy, dz;

    if (!D_00197818)
        D_00197818 = 1;
    radius = radius * radius;
    saved = func_08F108(7) != 0;
    func_08F0E0(7);
    MatrixMode(2);
    PushMatrix();
    LoadIdentity();
    UpdateMatrix();
    func_08F260(1.0f, 1.0f);
    func_093EC0(0xFF);
    func_08F380(1);
    func_08F0E0(5);
    func_08F0E0(0);
    func_08F0C0(9);
    func_08F0C0(1);
    func_08F0C0(4);
    func_08F388(0, 2, 3, 0, 0);
    func_08F0E0(10);
    for (pass = 0; pass < 2; pass++) {
        n = D_00197790;
        if (pass == 1)
            n = D_00197794;
        if (n) {
            do {
                if ((n->flags & 0x21) == 1) {
                    k = n->kind & 0xF0000;
                    if (k == 0x10000 || k == 0x20000) {
                        p = n->pos;
                        p.y += 0.01f;
                        dx = p.x - center.x;
                        dy = p.y - center.y;
                        dz = p.z - center.z;
                        if (dx * dx + dy * dy + dz * dz < radius) {
                            t = 0;
                            idx = func_0F1828(&p, &t);
                            if (idx != 0xFFFFFFFF) {
                                e = ((Table *)func_0F0F30())->entries + idx;
                                t = t;
                                p.x -= e->x * (t * D_00197814);
                                p.y -= e->y * (t * D_00197814);
                                p.z -= e->z * (t * D_00197814);
                                if (e && t < 2.0f) {
                                    k = *(u16 *)((char *)n + 0x7A) & 0xF;
                                    switch (k) {
                                    case 1:
                                        func_091678(D_0019790C);
                                        func_090630(0);
                                        func_072EF0(&p, &e->x, 0x2F,
                                            ((Slot *)(n->hdr->slots + n->slot * 0x34))->inner->f38);
                                        func_090630(0);
                                        break;
                                    case 2:
                                        if (func_072C80(n, 0x4F, 0.6f)) {
                                            func_094300(gRT_AuxBuffer, 1);
                                            UpdateMatrix();
                                            func_090388();
                                            MatrixMode(2);
                                            PushMatrix();
                                            LoadIdentity();
                                            UpdateMatrix();
                                            func_000E20();
                                            func_090388();
                                            func_090868(1, 2);
                                            func_090630(0);
                                            func_072EF0(&p, &e->x, 0x1F,
                                                ((Slot *)(n->hdr->slots + n->slot * 0x34))->inner->f38);
                                            func_090630(0);
                                            MatrixMode(2);
                                            PopMatrix();
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                n = n->next;
            } while (n);
        }
    }
    if (saved)
        func_08F0C0(7);
    MatrixMode(2);
    PopMatrix();
    UpdateMatrix();
    func_08F0C0(5);
    func_08F0C0(1);
}
