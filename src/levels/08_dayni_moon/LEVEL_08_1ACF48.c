/* LEVEL_08:0x1ACF48 -- when the first linked record has kind 9 or the second does, and the second's kind is 9 or 10, runs the helper on the third linked record. */
typedef struct { char pad00[0x45]; unsigned char kind; } Item;
typedef struct { Item *a; Item *b; char *third; } Rec;
typedef struct { char pad00[0x54]; Rec *rec; } Obj;
extern void func_178428(char *record, unsigned char value);

void func_1ACF48(Obj *o)
{
    Rec *rec = o->rec;
    unsigned int k;

    if (rec->a->kind == 9) {
        k = rec->b->kind;
    } else {
        Item *b = rec->b;

        if (b->kind != 9) {
            return;
        }
        k = b->kind;
    }
    if (k - 9 < 2) {
        func_178428(rec->third, 0);
    }
}
