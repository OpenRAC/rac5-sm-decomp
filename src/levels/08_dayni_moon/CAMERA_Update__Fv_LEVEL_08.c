/* LEVEL_08:0x000E40 -- placement copy of LEVEL_01_000E40.c: per-frame update of the active views: runs the two slot callbacks of the current mode, then installs the chosen matrix and notifies. */

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

extern View *D_00237DC8[1];
extern unsigned int D_00237DCC;

extern void func_001000(unsigned int i);
extern void func_001458(float f);
extern void func_001440(void);

void CAMERA_Update__Fv(void)
{
    unsigned int i;
    int j;
    Slot *s;
    View *v;
    Entry *e;

    for (i = 0; i < D_00237DCC; i++) {
        func_001000(i);
        for (j = 0; j < 2; j++) {
            s = &D_00237DC8[0]->slots[j];
            s->a = D_00237DC8[0]->fa;
            s->b = D_00237DC8[0]->fb;
            e = &s->tab[s->idx];
            if (e->fn != 0)
                s->result = e->fn(&s->a, &s->b, j, e->arg);
            else
                s->result = 0;
        }
        s = (Slot *)D_00237DC8[0]->sel;
        s = (Slot *)((int)s * 0x30);
        s = (Slot *)((char *)s + 0x90);
        s = (Slot *)((char *)D_00237DC8[0] - (-(int)s));
        D_00237DC8[0]->cur = *s->result;
        v = D_00237DC8[0];
        v->on_115 = 1;
        v->on_114 = 1;
        func_001458(s->a);
        D_00237DC8[0]->fb = s->b;
        func_001440();
    }
}
