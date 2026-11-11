/* LEVEL_22:0x131A08 -- raises a stored float to the helper's value for the object when that value is larger; reports whether it was larger. */
typedef struct {
    char pad0[0x58];
    char *link;
} Obj;

extern Obj *D_001668A4;
extern float func_131248(char *a0, unsigned char a1);

int func_131A08(Obj *o, float *out, int keep)
{
    float value;
    int bigger;

    if (out == 0) {
        return 0;
    }
    if (o == 0) {
        o = D_001668A4;
        if (o == 0) {
            return 0;
        }
    }
    value = func_131248((char *)o, *(unsigned char *)(o->link + 0xAD));
    bigger = *out < value;
    if (bigger) {
        if (keep == 0) {
            *out = value;
        }
    }
    return bigger;
}
