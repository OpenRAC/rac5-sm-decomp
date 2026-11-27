/* LEVEL_01:0x1908A0 -- 1 without a second handle, else 1 only when the second handle is ready and the first is not. */
typedef struct {
    int w0;
    int w4;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int func_01A490(int a0);

long long func_1908A0(Obj *o)
{
    Rec *r = o->rec;
    long long ok;
    int idle;

    if (r->w4 != 0) {
        ok = 0;
        if (func_01A490(r->w4) != 0) {
            idle = func_01A490(r->w0) == 0;
            ok = idle;
        }
        return ok;
    }
    return 1;
}
