/* LEVEL_23:0x17E6E8 -- placement copy of LEVEL_22_131A08.c: raises a stored float to the helper's value for the object when that value is larger; reports whether it was larger. */
typedef struct {
    char pad0[0x58];
    char *link;
} Obj;

extern Obj *D_001DBE24;
extern float func_17DF28(char *a0, unsigned char a1);

int func_17E6E8(Obj *o, float *out, int keep)
{
    float value;
    int bigger;

    if (out == 0) {
        return 0;
    }
    if (o == 0) {
        o = D_001DBE24;
        if (o == 0) {
            return 0;
        }
    }
    value = func_17DF28((char *)o, *(unsigned char *)(o->link + 0xAD));
    bigger = *out < value;
    if (bigger) {
        if (keep == 0) {
            *out = value;
        }
    }
    return bigger;
}
