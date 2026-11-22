/* LEVEL_01:0x1A30B8 -- initialises the object's record: clears its two header words, sets up its seven 0x28-byte slots, clears the flag byte, starts the global effect with fixed parameters and queues the follow-up with the global record's word; returns 1. */
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

extern Glob *D_001F45E4;
extern char D_0020F588[];
extern char D_002260A8[];
extern char D_00226090[];
extern int func_0781D8(char *sub, int a, int b, int c, char *table);
extern void func_06ADB8(Glob *g, char *first, char *second, int mode, float fx, float fy, float fz);
extern void func_023838(char *record, int kind, int id, int flag);

int func_1A30B8(Obj *o)
{
    Rec *rec;
    unsigned int i;

    rec = o->rec;
    rec->w0 = 0;
    rec->w4 = 0;
    for (i = 0; i < 7; i++)
        func_0781D8(rec->slots[i], 0, 0x44, 0x45, D_0020F588);
    rec->pad120[0] = 0;
    func_06ADB8(D_001F45E4, D_002260A8, D_00226090, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_023838((char *)o + 0x74, 0xF, D_001F45E4->wF8, -1);
    return 1;
}
