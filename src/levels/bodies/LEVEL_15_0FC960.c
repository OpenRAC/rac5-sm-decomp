/* LEVEL_15:0x0FC960 -- initializes an object from a record index, a 24-byte blob and per-entry results. */
typedef struct {
    char b[24];
} Blob0FC960;

typedef struct {
    char pad[0xB0];
} Rec0FC960;

typedef struct {
    char pad0[0x1C];
    Rec0FC960 *rec;
    Blob0FC960 blob;
    char pad38[0x1C];
    int ent[2];
    int f5C;
} Obj0FC960;

typedef struct {
    int v;
    char pad4[0x44];
} Ent0FC960;

typedef struct {
    char pad0[0x64];
    Ent0FC960 ents[2];
} Src0FC960;

extern char D_0016F720[];
extern Rec0FC960 D_002ECD18[];
extern void func_080488(Obj0FC960 *o, int s);
extern void func_0FCA58(Obj0FC960 *o, Src0FC960 *s);
extern int func_13DF60(int v);
extern int func_1258D8(int v);

void func_0FC960(Obj0FC960 *o, int idx, Blob0FC960 *blob, Src0FC960 *s)
{
    unsigned int i;

    func_080488(o, (int)D_0016F720);
    o->rec = &D_002ECD18[idx];
    o->blob = *blob;
    func_0FCA58(o, s);
    for (i = 0; i < 2; i++)
        o->ent[i] = func_13DF60(s->ents[i].v);
    o->f5C = func_1258D8(*(int *)((char *)s + 0xF4));
}
