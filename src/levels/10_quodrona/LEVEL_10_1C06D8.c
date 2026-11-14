/* LEVEL_10:0x1C06D8 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_003A1AA0[];
extern Shared D_00211C18;
extern int D_002A122C;
extern void *D_001FD5E4[1];
extern char D_002318A0[];
extern char D_00220DD8[];
extern void func_06ADF0(char *a);
extern void func_1C0950(void);
extern void func_069BE8(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1C06D8(Obj *o)
{
    func_06ADF0(D_003A1AA0);
    o->block->callback = func_1C0950;
    if (D_00211C18.slot == -1)
        D_00211C18.slot = D_002A122C;
    o->rec->w0C = 0;
    func_069BE8(D_001FD5E4[0], D_002318A0, D_00220DD8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
