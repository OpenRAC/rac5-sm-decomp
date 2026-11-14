/* LEVEL_03:0x1C7F40 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
typedef struct {
    char pad00[0xDC];
    void *callback;
} Block;

typedef struct {
    char pad00[0xC];
    int w0C;
} Rec;

typedef struct {
    char pad00[0x48];
    Block *block;
    char pad4C[0xC];
    Rec *rec;
} Obj;

typedef struct {
    char pad00[0xC];
    int slot;
} Shared;

extern char D_003B3490[];
extern Shared D_00221D80;
extern int D_002B2CAC;
extern void *D_0020CC64[1];
extern char D_00242B68[];
extern char D_00230D58[];
extern void func_06A560(char *a);
extern void func_1C81B8(void);
extern void func_069740(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1C7F40(Obj *o)
{
    func_06A560(D_003B3490);
    o->block->callback = func_1C81B8;
    if (D_00221D80.slot == -1)
        D_00221D80.slot = D_002B2CAC;
    o->rec->w0C = 0;
    func_069740(D_0020CC64[0], D_00242B68, D_00230D58, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
