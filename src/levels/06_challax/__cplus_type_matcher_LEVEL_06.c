/* LEVEL_06:0x1DB450 -- placement copy of LEVEL_01_1EC508.c: when the message (if any) is of kind 4, returns the stored value when the callback is -1, else passes the callback result with two of the object's words to the helper and keeps a non-zero result. */
typedef struct Msg {
    char pad00[4];
    short kind;
} Msg;

typedef struct Obj {
    char pad00[8];
    int w08;
    int w0C;
    char pad10[0x28 - 0x10];
    int w28;
} Obj;

extern int func_1DD2D8(int a, int b, int c);

int __cplus_type_matcher(Obj *o, int (*callback)(void), Msg *msg)
{
    int r;

    if (msg != 0 && msg->kind != 4) {
        return 0;
    }
    if (callback == (int (*)(void))-1) {
        return o->w08;
    }
    r = func_1DD2D8(callback(), o->w0C, o->w28);
    if (r != 0) {
        o->w08 = r;
    }
    return r;
}
