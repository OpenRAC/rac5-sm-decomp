/* LEVEL_02:0x1D4DF8 -- runs a probe; when it reports six, calls a helper with the owner's pointer field and a float, and then always calls a second helper with the status byte. */

struct Obj {
    unsigned char pad0[0x45];
    unsigned char b45;
    unsigned char pad1[0x54 - 0x46];
    unsigned char *p54;
};

int func_1D4908(struct Obj *o);
int func_031428(unsigned char *p, struct Obj *o, unsigned char *tbl, float f, int n);
void func_1D4568(struct Obj *o, unsigned int b, unsigned int c);

extern unsigned char D_00240330[];

void func_1D4DF8(struct Obj *o)
{
    unsigned char *p;
    int s;

    p = o->p54;
    s = func_1D4908(o);
    if (s == 6) {
        if (func_031428(p, o, D_00240330, 0.9f, 2) == 0) {
            return;
        }
    }
    func_1D4568(o, o->b45, s & 0xFF);
}
