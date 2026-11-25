/* LEVEL_19:0x0A5528 -- placement copy of LEVEL_16_0A5CB0.c: caches one player's pointer-position and per-slot values, refreshing the derived scale when the position changed. */
typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    char pad00[0x96C];
    Vec2 pos;
} Obj;

typedef struct {
    char pad00[0xFC8];
    int id;
} Base;

extern Base D_001E4210;
extern float D_001AB9F8[];
extern float D_001ABA00[];
extern int D_001ABA08[];
extern int D_001ABA10[];
extern int D_001ABA18[];
extern float D_001ABBB0[];
extern float D_001ABBB8[];

extern Obj *func_113490(int n);
extern int func_025780(int id);
extern int func_113E28(int n);
extern int func_113E40(void);
extern int func_113E78(void);
extern void func_0A5780(void);

void func_0A5528(int n)
{
    Vec2 p;
    float y;

    p = func_113490(n)->pos;
    D_001ABA00[n] = p.x;
    D_001AB9F8[n] = p.y;
    func_025780(D_001E4210.id);
    func_025780(D_001E4210.id + 1);
    D_001ABA18[n] = func_113E28(n);
    D_001ABA08[n] = ((int (*)(int))func_113E40)(n);
    D_001ABA10[n] = ((int (*)(int))func_113E78)(n);
    if (D_001ABBB0[n] != p.x || D_001ABBB8[n] != p.y) {
        D_001ABA00[n] = p.x;
        D_001ABBB0[n] = p.x;
        D_001AB9F8[n] = p.y;
        y = 1.0f;
        if (p.y != 0.0f) {
            y = p.y;
        }
        D_001AB9F8[n] = y;
        D_001ABBB8[n] = y;
        func_0A5780();
    }
}
