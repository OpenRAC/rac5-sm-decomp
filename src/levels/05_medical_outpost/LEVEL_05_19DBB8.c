/* LEVEL_05:0x19DBB8 -- placement copy of LEVEL_01_1A30B8.c: initialises the object's record: clears its two header words, sets up its seven 0x28-byte slots, clears the flag byte, starts the global effect with fixed parameters and queues the follow-up with the global record's word; returns 1. */
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

extern Glob *D_001E3964;
extern char D_001FE488[];
extern char D_00213548[];
extern char D_00213530[];
extern int func_0747F0(char *sub, int a, int b, int c, char *table);
extern void func_068A20(Glob *g, char *first, char *second, int mode, float fx, float fy, float fz);
extern void func_0227D0(char *record, int kind, int id, int flag);

int func_19DBB8(Obj *o)
{
    Rec *rec;
    unsigned int i;

    rec = o->rec;
    rec->w0 = 0;
    rec->w4 = 0;
    for (i = 0; i < 7; i++)
        func_0747F0(rec->slots[i], 0, 0x44, 0x45, D_001FE488);
    rec->pad120[0] = 0;
    func_068A20(D_001E3964, D_00213548, D_00213530, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    func_0227D0((char *)o + 0x74, 0xF, D_001E3964->wF8, -1);
    return 1;
}
