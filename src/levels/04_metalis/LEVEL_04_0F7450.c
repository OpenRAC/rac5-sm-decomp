/* LEVEL_04:0x0F7450 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_00230158[];
extern void func_0A4D30(void *o, void *p);
extern void func_0F7088(void *o, int *tbl);
extern int func_0EBA48(int a);
extern int func_104038(int a);
extern int func_107970(int a);
extern int func_105D88(int a);

void func_0F7450(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_0A4D30(o, D_00230158);
    o->f_2C = p;
    o->f_1C = func_0EBA48(tbl[0]);
    o->f_20 = func_104038(tbl[1]);
    o->f_24 = func_107970(tbl[2]);
    if (tbl[3] != 0) {
        v = func_105D88(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0F7088(o, tbl);
}
