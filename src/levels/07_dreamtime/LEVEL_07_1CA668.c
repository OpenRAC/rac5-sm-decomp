/* LEVEL_07:0x1CA668 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_003ADDA0[];
extern Shared D_0021DA70;
extern int D_002AD72C;
extern void *D_002088E4[1];
extern char D_0023E0B0[];
extern char D_0022CB58[];
extern void func_06CA58(char *a);
extern void func_1CA910(void);
extern void func_06BAC0(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1CA668(Obj *o)
{
    func_06CA58(D_003ADDA0);
    o->block->callback = func_1CA910;
    if (D_0021DA70.slot == -1)
        D_0021DA70.slot = D_002AD72C;
    o->rec->w0C = 0;
    func_06BAC0(D_002088E4[0], D_0023E0B0, D_0022CB58, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
