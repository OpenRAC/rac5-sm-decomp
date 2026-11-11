/* LEVEL_05:0x003380 -- copies one record of the level's stream into the
   current record: two floats and one word, the record living at +0x1D8 of
   the object the global points to. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 v;
    int i;
} Rec;

typedef struct {
    char pad[0x1D8];
    Rec rec;
} Big;

extern Big *D_1DE5D4;

void func_003380(Rec *src)
{
    Big *dst = D_1DE5D4;

    dst->rec = *src;
}
