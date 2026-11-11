/* LEVEL_10:0x162BA8 -- asks func_162C38 for a record and, when it answers,
   calls func_162618 and clears the two fields of the record. */
typedef struct {
    char pad[0x64];
    float f_64;
    int f_68;
} Obj;

extern Obj *func_162C38(Obj *a0);
extern void func_162618(Obj *a0);

void func_162BA8(Obj *a0)
{
    Obj *r = func_162C38(a0);
    if (r) {
        func_162618(a0);
        r->f_68 = 0;
        r->f_64 = -1.0f;
    }
}
