/* LEVEL_19:0x018870 -- copies the level's stored record into the caller's
   record and hands the record back. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 v;
    int i;
} Rec;

extern Rec D_1DEA68;

Rec *func_018870(Rec *dst)
{
    *dst = D_1DEA68;
    return dst;
}
