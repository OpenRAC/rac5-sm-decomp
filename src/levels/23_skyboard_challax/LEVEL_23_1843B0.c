/* LEVEL_23:0x1843B0 -- placement copy of LEVEL_01_1A30B8.c: initialises the object's record: clears its two header words, sets up its seven 0x28-byte slots, clears the flag byte, starts the global effect with fixed parameters and queues the follow-up with the global record's word; returns 1. */
typedef struct {
    int w0;
    int w4;
    char slots[7][0x28];
    char pad120[1];
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

typedef struct {
    char pad00[0xF8];
    int wF8;
} Glob;

extern Glob *D_001C79E4;
extern char D_001E2708[];
extern char D_001F56C8[];
extern char D_001F56B0[];
extern int func_06F4B0(char *sub, int a, int b, int c, char *table);
extern void func_064570(Glob *g, char *first, char *second, int mode, float fx, float fy, float fz);
extern void func_0219E0(char *record, int kind, int id, int flag);

int func_1843B0(Obj *o)
{
    Rec *rec;
    unsigned int i;

    rec = o->rec;
    rec->w0 = 0;
    rec->w4 = 0;
    for (i = 0; i < 7; i++)
        func_06F4B0(rec->slots[i], 0, 0x44, 0x45, D_001E2708);
    rec->pad120[0] = 0;
    func_064570(D_001C79E4, D_001F56C8, D_001F56B0, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_0219E0((char *)o + 0x74, 0xF, D_001C79E4->wF8, -1);
    return 1;
}
