/* LEVEL_22:0x0B7268 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_0015FF1C;
extern Cfg *D_0015332C;
extern void func_10CB48(struct Obj *p);
extern void func_10A4E0(int value);
extern int func_10ACE0(int v);
extern int func_10A988(void *arg);

void func_0B7268(struct Obj *p)
{
    func_10CB48(p);
    func_10A4E0(0);
    func_10ACE0(D_0015FF1C);
    func_10A988(D_0015332C->w3C);
}
