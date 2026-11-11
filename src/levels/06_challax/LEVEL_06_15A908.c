/* LEVEL_06:0x15A908 -- asks func_15A998 for a record and, when it answers,
   calls func_15A378 and clears the two fields of the record. */
typedef struct {
    char pad[0x64];
    float f_64;
    int f_68;
} Obj;

extern Obj *func_15A998(Obj *a0);
extern void func_15A378(Obj *a0);

void func_15A908(Obj *a0)
{
    Obj *r = func_15A998(a0);
    if (r) {
        func_15A378(a0);
        r->f_68 = 0;
        r->f_64 = -1.0f;
    }
}
