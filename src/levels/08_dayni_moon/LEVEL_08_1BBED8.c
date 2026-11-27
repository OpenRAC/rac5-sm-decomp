/* LEVEL_08:0x1BBED8 -- placement copy of LEVEL_04_19B1A8.c: initialises the object: points its record at the shared table, plays the start effect with a small float, nudges the object's height, clears the record's links and counters, flags the object, writes the global colour word from the shared halfword and returns 1. */
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

extern char D_00270DF0[];
extern unsigned int D_00251E20[1];
extern unsigned int D_002E705C[1];
extern void func_0149D0(char *pos, int a, int b, float f);

int func_1BBED8(Obj *o)
{
    Rec *rec;
    Sub *sub;

    rec = o->rec;
    rec->w0 = (int)D_00270DF0;
    func_0149D0(o->pos, 0, 0, 0.20000000298023224f);
    o->f34 = o->f34 + 0.15000000596046448f;
    sub = &rec->sub;
    sub->b0E = 2;
    sub->owner = o;
    sub->w14 = 0;
    rec->sub.w00 = 0;
    o->flags = o->flags | 0x20;
    rec->w38 = 0;
    o->w6C = 0xFF000000u;
    o->b46 = 0;
    D_00251E20[0] = (D_00251E20[0] & 0xF800FFFFu) | (D_002E705C[0] << 16);
    o->w78 = (o->w78 & 0xFFF0FFFFu) | 0x20000u;
    return 1;
}
