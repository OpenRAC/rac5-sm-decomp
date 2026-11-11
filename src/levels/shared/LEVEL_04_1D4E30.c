/* LEVEL_04:0x1D4E30 -- clears a stale slot pointer, then sets a bit for the first matching table entry. */

typedef struct {
    int key;
    int val;
} Ent;

typedef struct {
    Ent ent[8];
    int *f_40;
    unsigned char f_44;
    unsigned char f_45;
} Obj;

typedef struct {
    char pad_00[0x58];
    Obj *f_58;
} Outer;

void func_1D4E30(Outer *a0, int a1)
{
    Obj *s;
    unsigned char i;

    s = a0->f_58;
    if (s->f_40 != 0) {
        if (*s->f_40 == a1) {
            s->f_40 = 0;
        }
    }
    for (i = 0; i < s->f_44; i++) {
        if (s->ent[i].key == a1) {
            s->f_45 = s->f_45 | (1 << i);
            return;
        }
    }
}
