/* LEVEL_24:0x181758 -- placement copy of LEVEL_01_1A30B8.c: initialises the object's record: clears its two header words, sets up its seven 0x28-byte slots, clears the flag byte, starts the global effect with fixed parameters and queues the follow-up with the global record's word; returns 1. */
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

extern Glob *D_001C5264;
extern char D_001E0308[];
extern char D_001F3528[];
extern char D_001F3510[];
extern int func_072940(char *sub, int a, int b, int c, char *table);
extern void func_064408(Glob *g, char *first, char *second, int mode, float fx, float fy, float fz);
extern void func_0215B0(char *record, int kind, int id, int flag);

int func_181758(Obj *o)
{
    Rec *rec;
    unsigned int i;

    rec = o->rec;
    rec->w0 = 0;
    rec->w4 = 0;
    for (i = 0; i < 7; i++)
        func_072940(rec->slots[i], 0, 0x44, 0x45, D_001E0308);
    rec->pad120[0] = 0;
    func_064408(D_001C5264, D_001F3528, D_001F3510, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_0215B0((char *)o + 0x74, 0xF, D_001C5264->wF8, -1);
    return 1;
}
