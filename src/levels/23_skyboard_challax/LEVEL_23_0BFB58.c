/* LEVEL_23:0x0BFB58 -- placement copy of LEVEL_24_0C2680.c: placement copy of LEVEL_01_0C8DB8.c: callback: forwards its argument, clears the flag, applies the saved setting and the value of the current record. */
struct Obj;

typedef struct Cfg {
    char pad0[0x3C];
    void *w3C;
} Cfg;

extern int D_001D3F9C;
extern Cfg *D_001C73AC;
extern void func_126DF0(struct Obj *p);
extern void func_124788(int value);
extern int func_124F88(int v);
extern int func_124C30(void *arg);

void func_0BFB58(struct Obj *p)
{
    func_126DF0(p);
    func_124788(0);
    func_124F88(D_001D3F9C);
    func_124C30(D_001C73AC->w3C);
}
