/* LEVEL_08:0x16D3C8 -- placement copy of LEVEL_04_166730.c: tears the object down: detaches it from its target, drops the sound handle and the attached record, and finishes the sub-record. */
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

extern void func_1F9DB0(Outer *a0, int a1);
extern void func_20CCC0(Obj *o);
extern void func_0845F8(char *sound, int flag);
extern void func_088AA8(char *record);
extern void func_20ED08(void *p);

void func_16D3C8(Obj *o)
{
    char *rec = o->rec;
    Sub *s = (Sub *)(rec + 0xA0);

    func_1F9DB0((Outer *)o->link->target, (int)o);
    func_20CCC0(o);
    if (s->sound != 0) {
        func_0845F8(s->sound, 1);
        s->sound = 0;
    }
    if (s->record != 0) {
        func_088AA8(s->record);
        s->record = 0;
    }
    func_20ED08(rec + 0xAC);
}
