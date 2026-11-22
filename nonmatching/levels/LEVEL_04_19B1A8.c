/* USA LEVEL_04.REL:0x19B1A8, 232-byte candidate (21 November 2026).
 * Measured pinned: 24 differing words; first difference at 0x58.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w00;
    char pad04[0x0E - 4];
    unsigned char b0E;
    char pad0F;
    void *owner;
    int w14;
} Sub;

typedef struct {
    int w0;
    Sub sub;
    char pad1C[0x38 - 0x1C];
    int w38;
} Rec;

typedef struct {
    char pad00[0x30];
    char pos[4];
    float f34;
    char pad38[0x46 - 0x38];
    unsigned char b46;
    char pad47[0x58 - 0x47];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x6C - 0x68];
    unsigned int w6C;
    char pad70[0x78 - 0x70];
    unsigned int w78;
} Obj;

extern char D_0023D6A0[];
extern unsigned int D_00221E38;
extern unsigned int D_002B25DC;
extern void func_013FF0(char *pos, int a, int b, float f);

int func_19B1A8(Obj *o)
{
    Rec *rec;
    Sub *sub;

    rec = o->rec;
    rec->w0 = (int)D_0023D6A0;
    func_013FF0(o->pos, 0, 0, 0.20000000298023224f);
    o->f34 = o->f34 + 0.15000000596046448f;
    sub = &rec->sub;
    sub->b0E = 2;
    o->b46 = 0;
    sub->w14 = 0;
    rec->sub.w00 = 0;
    sub->owner = o;
    o->flags = o->flags | 0x20;
    o->w6C = 0xFF000000u;
    rec->w38 = 0;
    D_00221E38 = (D_00221E38 & 0xF800FFFFu) | (D_002B25DC << 16);
    o->w78 = (o->w78 & 0xFFF0FFFFu) | 0x20000u;
    return 1;
}
