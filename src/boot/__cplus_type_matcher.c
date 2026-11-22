/* 0x01E98120 -- exception type matcher: if the message (when present) is of kind 4, returns the stored value when the callback is -1, else passes the callback result with two of the object's words to the RTTI matcher and keeps a non-zero result. Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__cplus_type_matcher_FRONTEND.c (__cplus_type_matcher_FRONTEND). */
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

extern int __throw_type_match_rtti(int a, int b, int c);

int __cplus_type_matcher(Obj *o, int (*callback)(void), Msg *msg)
{
    int r;

    if (msg != 0 && msg->kind != 4) {
        return 0;
    }
    if (callback == (int (*)(void))-1) {
        return o->w08;
    }
    r = __throw_type_match_rtti(callback(), o->w0C, o->w28);
    if (r != 0) {
        o->w08 = r;
    }
    return r;
}
