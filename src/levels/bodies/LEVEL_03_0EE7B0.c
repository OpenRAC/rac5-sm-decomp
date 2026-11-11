/* LEVEL_03:0x0EE7B0 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_0022F6D8[];
extern void func_09F8A0(void *o, void *p);
extern void func_0EE3E8(void *o, int *tbl);
extern int func_0E5F70(int a);
extern int func_0FB398(int a);
extern int func_0FDAF0(int a);
extern int func_0FD0E8(int a);

void func_0EE7B0(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_09F8A0(o, D_0022F6D8);
    o->f_2C = p;
    o->f_1C = func_0E5F70(tbl[0]);
    o->f_20 = func_0FB398(tbl[1]);
    o->f_24 = func_0FDAF0(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0FD0E8(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0EE3E8(o, tbl);
}
