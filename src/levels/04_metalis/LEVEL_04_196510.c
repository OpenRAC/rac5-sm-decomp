/* LEVEL_04:0x196510 -- when the gate check passes, plays the record's sound and, unless the second check blocks it, starts the follow-up; then asks the object to refresh. */
typedef struct Rec {
    char *link;
    int id;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
} Obj;

extern int D_0024FEEC;
extern int D_00234170;

extern unsigned char func_027310(unsigned int index);
extern int func_027098(int a, int b);
extern void func_06D5E8(int a, int b);
extern int func_13F720(int a);
extern void func_14F840(char *object, unsigned int index);
extern void func_07FAE8(Obj *o, int mode);

void func_196510(Obj *o)
{
    Rec *r = o->rec;

    if (func_027310(5) == 0) {
        func_06D5E8(D_0024FEEC, r->id);
        if (func_027098(0x1B, 0xFF) == 0) {
            func_13F720(D_00234170);
            func_14F840(r->link, 0);
        }
    }
    func_07FAE8(o, 1);
}
