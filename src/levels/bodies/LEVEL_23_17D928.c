/* LEVEL_23:0x17D928 -- placement copy of LEVEL_22_130C48.c: resets the object pointer to the global default, runs two helpers and releases the non-null slots except the current one. */

typedef struct {
    char pad0[0x40];
    void *arr[4];
    char pad1[0x5C];
    unsigned char b_ac;
    unsigned char b_ad;
} Sub;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x12];
    Sub *sub58;
} Obj;

extern Obj *D_001DBE24;
extern char D_002025C0[];

void func_17D890(Obj *p);
void func_17CAE0(Obj *p, int b, int c);
void func_056910(void *a, int b);
void func_193F78(void *e);

void func_17D928(int arg)
{
    Obj *p = (Obj *)arg;
    Sub *s;
    unsigned int i;
    void *e;

    if (p == 0) {
        p = D_001DBE24;
        if (p == 0) {
            return;
        }
    }
    s = p->sub58;
    func_17D890(p);
    func_17CAE0(p, p->b45, 6);
    s->b_ac = 3;
    func_056910(D_002025C0, 1);
    for (i = 0; i < 4; i++) {
        e = s->arr[i];
        if (s->b_ad != i) {
            if (e != 0) {
                func_193F78(e);
            }
        }
    }
}
