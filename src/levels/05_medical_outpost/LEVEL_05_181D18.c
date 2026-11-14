/* LEVEL_05:0x181D18 -- releases the object's record: clears its slot in the global table and frees and clears its attached block. */
typedef struct {
    char pad_00[0x54];
    char *block;
    unsigned char slot;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec;
} Obj;

extern int D_001F7720[];
extern void func_07E1D8(char *record);

void func_181D18(Obj *o)
{
    Rec *r = o->rec;

    D_001F7720[r->slot] = 0;
    if (r->block != 0) {
        func_07E1D8(r->block);
        r->block = 0;
    }
}
