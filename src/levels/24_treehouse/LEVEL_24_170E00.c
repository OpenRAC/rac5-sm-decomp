/* LEVEL_24:0x170E00 -- registers the object's position with effect 0x17, hands the object to func_173060 for the sub-record's first reference and, when a second reference exists, to func_076D68. */
typedef struct {
    char pad00[8];
    char *ref8;
    char *refC;
} Sub;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x58 - 0x3C];
    Sub *sub;
} Obj;

extern void func_0E7540(unsigned int index, float *pos);
extern void func_173060(char *ref, Obj *o);
extern void func_076D68(char *ref, int mode);

void func_170E00(Obj *o)
{
    Sub *s;

    s = o->sub;
    func_0E7540(0x17, o->pos);
    func_173060(s->ref8, o);
    if (s->refC != 0)
        func_076D68(s->refC, 1);
}
