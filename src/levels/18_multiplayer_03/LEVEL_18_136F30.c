/* LEVEL_18:0x136F30 -- placement copy of LEVEL_16_13B640.c: when the record's lookup fails and the object passes the check, starts the effect, registers the object and reports success; otherwise returns -1. */
extern int func_111840(int a0, int a1, int a2);
extern int func_137538(char *a0);
extern void func_1630D8(int key, float f);
extern void func_186340(char *table, char *object);
extern char D_002E3020[];

struct Rec_13B640 {
    char pad_00[0x15];
    unsigned char b_15;
    unsigned char b_16;
    unsigned char b_17;
};

struct Obj_13B640 {
    char pad_00[0x54];
    struct Rec_13B640 *rec;
};

int func_136F30(struct Obj_13B640 *o)
{
    struct Rec_13B640 *r = o->rec;

    if (func_111840(r->b_15, r->b_16, r->b_17) == 0) {
        if (func_137538((char *)o) != 0) {
            func_1630D8((int)o, 30.0f);
            func_186340(D_002E3020, (char *)o);
            return 1;
        }
    }
    return -1;
}
