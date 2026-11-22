/* USA LEVEL_16.REL:0x164880, 220-byte candidate (21 November 2026).
 * Measured pinned: 29 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct {
    int w0;
    char pad04[0x10 - 4];
    unsigned char b10;
} Rec;

typedef struct {
    V4 r0;
    V4 r1;
    V4 r2;
    char pad30[0x58 - 0x30];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    int w70;
} Obj;

extern unsigned int D_001BDFC4;
extern int D_001BDFC8;
extern unsigned int D_0024E4C4;
extern void func_165D60(int *p, Obj *o);

int func_164880(Obj *o)
{
    V4 *p2;
    V4 *p1;
    Rec *rec;

    rec->b10 = 0;
    p1 = &o->r1;
    D_001BDFC4 = (D_001BDFC4 & 0xF800FFFFu) | (D_0024E4C4 << 16);
    o->w70 = 0;
    rec->w0 = 0;
    o->flags = o->flags | 0x20;
    p2 = &o->r2;
    o->r0.x = o->r2.x;
    o->r0.y = p2->y;
    o->r0.z = p2->z;
    o->r2.x = o->r0.y * p1->z - o->r0.z * p1->y;
    p2->y = o->r0.z * o->r1.x - o->r0.x * p1->z;
    rec = o->rec;
    p2->z = o->r0.x * p1->y - o->r0.y * o->r1.x;
    func_165D60(&D_001BDFC8, o);
    return 1;
}
