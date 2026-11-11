/* LEVEL_07:0x18B708 -- placement copy of LEVEL_01_17E628.c: initialises an object with random floats and cleared fields. */
struct V3 {
    int x, y, z;
};
struct Obj {
    float f00;
    float f04;
    char sub08[0x30];
    char sub38[0x30];
    int i68;
    int i6C;
    char sub70[0x34];
    int iA4;
    char padA8[0xC];
    unsigned char bB4;
    char padB5[3];
    int iB8;
    struct V3 v;
    char padC8[0x1C];
    float fE4;
    int iE8;
    int iEC;
    char padF0[0x58];
    float f148;
};
extern int rand(void);
extern char D_003AB960[];
extern void func_18A4F0(char *p);
extern void func_1066C8(char *dst, char *src, int n);
extern void func_18AF00(struct Obj *o);

void func_18B708(struct Obj *o)
{
    struct V3 *p;
    o->f00 = rand() * 4.6566123179658803e-10f;
    o->f04 = rand() * 4.6566123179658803e-10f;
    o->iA4 = 0;
    o->bB4 = 0;
    o->iB8 = 0;
    o->fE4 = rand() * 4.6566123179658803e-10f;
    o->iE8 = 0;
    o->iEC = 0;
    o->i68 = 0;
    o->i6C = 0;
    o->f148 = rand() * 4.6566123179658803e-10f;
    p = &o->v;
    p->x = 0;
    p->y = 0;
    p->z = 0;
    func_18A4F0(o->sub70);
    func_1066C8(o->sub38, D_003AB960, 2);
    func_1066C8(o->sub08, D_003AB960, 2);
    func_18AF00(o);
}
