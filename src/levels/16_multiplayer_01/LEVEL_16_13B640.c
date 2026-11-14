/* LEVEL_16:0x13B640 -- when the record's lookup fails and the object passes the check, starts the effect, registers the object and reports success; otherwise returns -1. */
extern int func_112A88(int a0, int a1, int a2);
extern int func_13BC48(char *a0);
extern void func_15D4E8(int key, float f);
extern void func_185D08(char *table, char *object);
extern char D_002E2D90[];

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

int func_13B640(struct Obj_13B640 *o)
{
    struct Rec_13B640 *r = o->rec;

    if (func_112A88(r->b_15, r->b_16, r->b_17) == 0) {
        if (func_13BC48((char *)o) != 0) {
            func_15D4E8((int)o, 30.0f);
            func_185D08(D_002E2D90, (char *)o);
            return 1;
        }
    }
    return -1;
}
