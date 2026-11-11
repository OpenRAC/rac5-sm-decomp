/* LEVEL_16:0x054818 -- reports whether a word field of an object is nonzero. */
typedef struct {
    char pad0[0xCE4];
    int wCE4;
} Obj;

int func_054818(Obj *o)
{
    return o->wCE4 != 0;
}
