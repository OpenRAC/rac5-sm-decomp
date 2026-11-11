/* LEVEL_02:0x16E178 -- with a zero flag, runs a fixed helper; otherwise scans a record table for a linked target and runs a helper on it. */

typedef struct {
    char pad_00[0x1C];
    char *f_1C;
} Inner;

typedef struct {
    char pad_00[0x54];
    Inner *f_54;
} Link;

typedef struct {
    Link *f_00;
    char pad_04[0x18];
} Rec;

typedef struct {
    char pad_00[0x54];
    Rec *f_54;
} Obj;

extern void func_01AB40(char *a0);
extern char D_0024C650[];

void func_16E178(Obj *a0, int a1)
{
    Rec *first;
    Rec *p;
    Rec *end;
    Link *l;
    char *q;
    char *g;

    first = a0->f_54;
    if (a1 == 0) {
        g = D_0024C650;
        func_01AB40(g + 0x30);
        return;
    }
    p = first;
    end = first + 8;
    while (p < end) {
        l = p->f_00;
        p++;
        if (l != 0) {
            q = l->f_54->f_1C;
            if (q != 0) {
                func_01AB40(q + 0x30);
                break;
            }
        }
    }
}
