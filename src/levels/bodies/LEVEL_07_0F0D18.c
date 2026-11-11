/* LEVEL_07:0x0F0D18 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_0022B4D8[];
extern void func_0A1AF8(void *o, void *p);
extern void func_0F0950(void *o, int *tbl);
extern int func_0E76B0(int a);
extern int func_0FD900(int a);
extern int func_100058(int a);
extern int func_0FF650(int a);

void func_0F0D18(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_0A1AF8(o, D_0022B4D8);
    o->f_2C = p;
    o->f_1C = func_0E76B0(tbl[0]);
    o->f_20 = func_0FD900(tbl[1]);
    o->f_24 = func_100058(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0FF650(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0F0950(o, tbl);
}
