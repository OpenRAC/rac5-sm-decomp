/* LEVEL_08:0x094610 -- scales three fields of a table element by
   (argument * 1.3492498f + 1.0f) when the global object is present and its
   index byte is neither 0 nor 255. */
typedef struct {
    unsigned char pad00[0x18];
    unsigned char idx;
} Obj;

typedef struct {
    unsigned char pad00[0x10];
    float f_10;
    float f_14;
    float f_18;
    unsigned char pad1C[0x14];
} Elem;

extern Obj *D_0028E2B4;
extern Elem D_0028CAB0[];

void func_094610(float f12)
{
    Obj *obj = D_0028E2B4;
    float k;

    if (obj != 0) {
        if (obj->idx == 255) {
            return;
        }
        if (obj->idx == 0) {
            return;
        }
        k = f12 * 1.3499999f + 1.0f;
        D_0028CAB0[obj->idx].f_10 *= k;
        D_0028CAB0[obj->idx].f_14 *= k;
        D_0028CAB0[obj->idx].f_18 *= k;
    }
}
