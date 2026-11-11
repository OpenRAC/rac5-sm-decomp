/* LEVEL_18:0x072420 -- placement copy of LEVEL_16_072D70.c: draws effects for nearby list nodes within a radius of a point. */
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

extern u8 D_001A5698;
extern Node *D_001A5610;
extern Node *D_001A5614;
extern float D_001A5694;
extern int D_001A578C;
extern unsigned char gRT_AuxBuffer[];

extern int func_08EC28(int);
extern void func_08EC00(int);
extern void func_08EBE0(int);
extern void func_08ED78(float, float);
extern void func_0939D8(int);
extern void func_08EE98(int);
extern void func_08EEA0(int, int, int, int, int);
extern int func_0F0A50(Vec3 *, float *);
extern u32 func_0F0158(void);
extern void func_091190(int);
extern void func_090148(int);
extern void func_090380(int, int);
extern void func_071E70(Vec3 *, void *, int, float);
extern int func_071C00(Node *, int, float);
extern void func_093E18(void *, int);
extern void func_08FEA0(void);
extern void func_000E90(void);
extern void MatrixMode(int) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

void func_072420(Vec3 center, float radius)
{
    Vec3 p;
    float t;
    Node *n;
    Entry *e;
    u32 pass;
    int saved, k;
    u32 idx;
    float dx, dy, dz;

    if (!D_001A5698)
        D_001A5698 = 1;
    radius = radius * radius;
    saved = func_08EC28(7) != 0;
    func_08EC00(7);
    MatrixMode(2);
    PushMatrix();
    LoadIdentity();
    UpdateMatrix();
    func_08ED78(1.0f, 1.0f);
    func_0939D8(0xFF);
    func_08EE98(1);
    func_08EC00(5);
    func_08EC00(0);
    func_08EBE0(9);
    func_08EBE0(1);
    func_08EBE0(4);
    func_08EEA0(0, 2, 3, 0, 0);
    func_08EC00(10);
    for (pass = 0; pass < 2; pass++) {
        n = D_001A5610;
        if (pass == 1)
            n = D_001A5614;
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
                            idx = func_0F0A50(&p, &t);
                            if (idx != 0xFFFFFFFF) {
                                e = ((Table *)func_0F0158())->entries + idx;
                                t = t;
                                p.x -= e->x * (t * D_001A5694);
                                p.y -= e->y * (t * D_001A5694);
                                p.z -= e->z * (t * D_001A5694);
                                if (e && t < 2.0f) {
                                    k = *(u16 *)((char *)n + 0x7A) & 0xF;
                                    switch (k) {
                                    case 1:
                                        func_091190(D_001A578C);
                                        func_090148(0);
                                        func_071E70(&p, &e->x, 0x2F,
                                            ((Slot *)(n->hdr->slots + n->slot * 0x34))->inner->f38);
                                        func_090148(0);
                                        break;
                                    case 2:
                                        if (func_071C00(n, 0x4F, 0.6f)) {
                                            func_093E18(gRT_AuxBuffer, 1);
                                            UpdateMatrix();
                                            func_08FEA0();
                                            MatrixMode(2);
                                            PushMatrix();
                                            LoadIdentity();
                                            UpdateMatrix();
                                            func_000E90();
                                            func_08FEA0();
                                            func_090380(1, 2);
                                            func_090148(0);
                                            func_071E70(&p, &e->x, 0x1F,
                                                ((Slot *)(n->hdr->slots + n->slot * 0x34))->inner->f38);
                                            func_090148(0);
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
        func_08EBE0(7);
    MatrixMode(2);
    PopMatrix();
    UpdateMatrix();
    func_08EBE0(5);
    func_08EBE0(1);
}
