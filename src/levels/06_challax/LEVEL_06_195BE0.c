/* LEVEL_06:0x195BE0 -- placement copy of LEVEL_01_1A30B8.c: initialises the object's record: clears its two header words, sets up its seven 0x28-byte slots, clears the flag byte, starts the global effect with fixed parameters and queues the follow-up with the global record's word; returns 1. */
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

extern Glob *D_001E34E4;
extern char D_001FE408[];
extern char D_00213D78[];
extern char D_00213D60[];
extern int func_071660(char *sub, int a, int b, int c, char *table);
extern void func_067B78(Glob *g, char *first, char *second, int mode, float fx, float fy, float fz);
extern void func_021DD8(char *record, int kind, int id, int flag);

int func_195BE0(Obj *o)
{
    Rec *rec;
    unsigned int i;

    rec = o->rec;
    rec->w0 = 0;
    rec->w4 = 0;
    for (i = 0; i < 7; i++)
        func_071660(rec->slots[i], 0, 0x44, 0x45, D_001FE408);
    rec->pad120[0] = 0;
    func_067B78(D_001E34E4, D_00213D78, D_00213D60, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_021DD8((char *)o + 0x74, 0xF, D_001E34E4->wF8, -1);
    return 1;
}
