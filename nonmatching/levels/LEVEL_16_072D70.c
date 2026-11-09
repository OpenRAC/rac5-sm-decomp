/* LEVEL_16.REL:0x072D70: reviewed 1072-byte candidate, held for ABI review.
 * Draws effects for nearby list nodes within a radius of a point.
 * gnu-ee-trial C with gnu-ee-trial links 1072/1072 bytes and is byte-exact at
 * this and 4 other USA placements, but the prototypes disagree.
 * It declares func_0F1920 returning pointer with no arguments, but the
 * accepted LEVEL_16_0F1920.c defines it returning int with no arguments.
 * It declares func_072550 returning int with (pointer, float, int), but the
 * accepted LEVEL_16_072550.c defines it returning int with (pointer, int,
 * float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern u8 D_001A4218;
extern Node *D_001A4190;
extern Node *D_001A4194;
extern float D_001A4214;
extern int D_001A430C;
extern unsigned char gRT_AuxBuffer[];

extern int func_08FC10(int);
extern void func_08FBE8(int);
extern void func_08FBC8(int);
extern void func_08FD68(float, float);
extern void func_0949C8(int);
extern void func_08FE88(int);
extern void func_08FE90(int, int, int, int, int);
extern int func_0F2218(Vec3 *, float *);
extern Table *func_0F1920(void);
extern void func_092180(int);
extern void func_091138(int);
extern void func_091370(int, int);
extern void func_0727C0(Vec3 *, void *, int, float);
extern int func_072550(Node *, float, int);
extern void func_094E08(void *, int);
extern void func_090E90(void);
extern void func_000E20(void);
extern void MatrixMode(int) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void PopMatrix(void) __asm__("PopMatrix__Q34scee3Psp3Gumv");
extern void LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

void func_072D70(Vec3 center, float radius)
{
    Vec3 p;
    float t;
    Node *n;
    Entry *e;
    u32 pass;
    int saved, k;
    u32 idx;
    float dx, dy, dz;

    if (!D_001A4218)
        D_001A4218 = 1;
    radius = radius * radius;
    saved = func_08FC10(7) != 0;
    func_08FBE8(7);
    MatrixMode(2);
    PushMatrix();
    LoadIdentity();
    UpdateMatrix();
    func_08FD68(1.0f, 1.0f);
    func_0949C8(0xFF);
    func_08FE88(1);
    func_08FBE8(5);
    func_08FBE8(0);
    func_08FBC8(9);
    func_08FBC8(1);
    func_08FBC8(4);
    func_08FE90(0, 2, 3, 0, 0);
    func_08FBE8(10);
    for (pass = 0; pass < 2; pass++) {
        n = D_001A4190;
        if (pass == 1)
            n = D_001A4194;
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
                            idx = func_0F2218(&p, &t);
                            if (idx != 0xFFFFFFFF) {
                                e = func_0F1920()->entries + idx;
                                t = t;
                                p.x -= e->x * (t * D_001A4214);
                                p.y -= e->y * (t * D_001A4214);
                                p.z -= e->z * (t * D_001A4214);
                                if (e && t < 2.0f) {
                                    k = *(u16 *)((char *)n + 0x7A) & 0xF;
                                    switch (k) {
                                    case 1:
                                        func_092180(D_001A430C);
                                        func_091138(0);
                                        func_0727C0(&p, &e->x, 0x2F,
                                            ((Slot *)(n->hdr->slots + n->slot * 0x34))->inner->f38);
                                        func_091138(0);
                                        break;
                                    case 2:
                                        if (func_072550(n, 0.6f, 0x4F)) {
                                            func_094E08(gRT_AuxBuffer, 1);
                                            UpdateMatrix();
                                            func_090E90();
                                            MatrixMode(2);
                                            PushMatrix();
                                            LoadIdentity();
                                            UpdateMatrix();
                                            func_000E20();
                                            func_090E90();
                                            func_091370(1, 2);
                                            func_091138(0);
                                            func_0727C0(&p, &e->x, 0x1F,
                                                ((Slot *)(n->hdr->slots + n->slot * 0x34))->inner->f38);
                                            func_091138(0);
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
        func_08FBC8(7);
    MatrixMode(2);
    PopMatrix();
    UpdateMatrix();
    func_08FBC8(5);
    func_08FBC8(1);
}
