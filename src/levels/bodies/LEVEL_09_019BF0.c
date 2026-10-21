/* LEVEL_09:0x019BF0 -- copies the level's stored record into the caller's
   record and hands the record back. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    V2 v;
    int i;
} Rec;

extern Rec D_217368;

Rec *func_019BF0(Rec *dst)
{
    *dst = D_217368;
    return dst;
}
