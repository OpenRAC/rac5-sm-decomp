/* LEVEL_01:0x0C8DB8 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_00200B9C;
extern Cfg *D_001F3FAC;
extern void func_135678(struct Obj *p);
extern void func_133010(int value);
extern int func_133810(int v);
extern int func_1334B8(void *arg);

void func_0C8DB8(struct Obj *p)
{
    func_135678(p);
    func_133010(0);
    func_133810(D_00200B9C);
    func_1334B8(D_001F3FAC->w3C);
}
