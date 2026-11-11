/* LEVEL_15:0x000998 -- placement copy of LEVEL_01_000E40.c: per-frame update of the active views: runs the two slot callbacks of the current mode, then installs the chosen matrix and notifies. */

typedef struct Mat {
    float m[16];
} Mat;

typedef Mat *(*SlotFn)(float *a, float *b, int slot, int arg);

typedef struct Entry {
    SlotFn fn;
    int arg;
} Entry;

typedef struct Slot {
    Entry tab[4];
    int idx;
    Mat *result;
    float a;
    float b;
} Slot;

typedef struct View {
    Mat cur;
    char pad_40[0x50];
    Slot slots[2];
    int sel;
    float fa;
    float fb;
    char pad_FC[0x18];
    char on_114;
    char on_115;
} View;

extern View *D_00143EB0[1];
extern unsigned int D_00143EB4;

extern void func_000B58(unsigned int i);
extern void func_000FB0(float f);
extern void func_000F98(void);

void func_000998(void)
{
    unsigned int i;
    int j;
    Slot *s;
    View *v;
    Entry *e;

    for (i = 0; i < D_00143EB4; i++) {
        func_000B58(i);
        for (j = 0; j < 2; j++) {
            s = &D_00143EB0[0]->slots[j];
            s->a = D_00143EB0[0]->fa;
            s->b = D_00143EB0[0]->fb;
            e = &s->tab[s->idx];
            if (e->fn != 0)
                s->result = e->fn(&s->a, &s->b, j, e->arg);
            else
                s->result = 0;
        }
        s = (Slot *)D_00143EB0[0]->sel;
        s = (Slot *)((int)s * 0x30);
        s = (Slot *)((char *)s + 0x90);
        s = (Slot *)((char *)D_00143EB0[0] - (-(int)s));
        D_00143EB0[0]->cur = *s->result;
        v = D_00143EB0[0];
        v->on_115 = 1;
        v->on_114 = 1;
        func_000FB0(s->a);
        D_00143EB0[0]->fb = s->b;
        func_000F98();
    }
}
