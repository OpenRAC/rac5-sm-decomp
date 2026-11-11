/* LEVEL_16:0x06FB50 -- with the flag clear, forwards the record to the finish handler; otherwise reports whether the projected position stays below the limit unless the pre-check fails. */
typedef struct {
    char pad0[0x28];
    float f28;
} Limit;

typedef struct {
    char pad0[4];
    Limit *limit;
    float f8;
} Pos;

typedef struct {
    char pad0[8];
    float f8;
    char padC[0x14 - 0xC];
    Pos *pos;
} Rec;

typedef struct {
    char pad[0x48];
    Rec *rec;
} Obj;

extern float D_001E062C;
extern int func_07A180(Rec *r);
extern int func_07A1C0(char *record);

int func_06FB50(Obj *o, int flag)
{
    Rec *r;

    if (flag != 0) {
        r = o->rec;
        if (func_07A180(r) != 0)
            return 0;
        if (r->pos->limit->f28 < r->pos->f8 + D_001E062C * r->f8)
            return 1;
        return 0;
    }
    return func_07A1C0((char *)o->rec);
}
