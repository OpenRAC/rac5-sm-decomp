/* LEVEL_04:0x166730 -- tears the object down: detaches it from its target, drops the sound handle and the attached record, and finishes the sub-record. */
typedef struct Outer Outer;

typedef struct {
    int target;
} Link;

typedef struct {
    char pad_00[4];
    char *sound;
    char *record;
} Sub;

typedef struct {
    char pad_00[0x54];
    Link *link;
    char *rec;
} Obj;

extern void func_1D4E30(Outer *a0, int a1);
extern void func_1E50F0(Obj *o);
extern void func_07FAE8(char *sound, int flag);
extern void func_083F98(char *record);
extern void func_1E7138(void *p);

void func_166730(Obj *o)
{
    char *rec = o->rec;
    Sub *s = (Sub *)(rec + 0xA0);

    func_1D4E30((Outer *)o->link->target, (int)o);
    func_1E50F0(o);
    if (s->sound != 0) {
        func_07FAE8(s->sound, 1);
        s->sound = 0;
    }
    if (s->record != 0) {
        func_083F98(s->record);
        s->record = 0;
    }
    func_1E7138(rec + 0xAC);
}
