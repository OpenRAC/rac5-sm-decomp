/* LEVEL_08:0x1BDBB8 -- placement copy of LEVEL_04_19CE88.c: calls func_21D048 for the object and, when the flag is zero, clears the sub-record's word at +0x10 and the object's byte at +0x46. */
typedef struct {
    char pad00[0x10];
    int w10;
} Sub;

typedef struct {
    char pad00[0x46];
    unsigned char b46;
    char pad47[0x58 - 0x47];
    Sub *sub;
} Obj;

extern void func_21D048(Obj *o, int flag);

void func_1BDBB8(Obj *o, int flag)
{
    func_21D048(o, flag);
    if (flag == 0) {
        o->sub->w10 = 0;
        o->b46 = 0;
    }
}
