/* LEVEL_20:0x090230 -- placement copy of LEVEL_16_0A5CB0.c: caches one player's pointer-position and per-slot values, refreshing the derived scale when the position changed. */
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

extern Base D_0013BA10;
extern float D_0010CF58[];
extern float D_0010CF60[];
extern int D_0010CF68[];
extern int D_0010CF70[];
extern int D_0010CF78[];
extern float D_0010D110[];
extern float D_0010D118[];

extern Obj *func_0E5858(int n);
extern int func_0226F8(int id);
extern int func_0E61F0(int n);
extern int func_0E6208(void);
extern int func_0E6240(void);
extern void func_090488(void);

void func_090230(int n)
{
    Vec2 p;
    float y;

    p = func_0E5858(n)->pos;
    D_0010CF60[n] = p.x;
    D_0010CF58[n] = p.y;
    func_0226F8(D_0013BA10.id);
    func_0226F8(D_0013BA10.id + 1);
    D_0010CF78[n] = func_0E61F0(n);
    D_0010CF68[n] = ((int (*)(int))func_0E6208)(n);
    D_0010CF70[n] = ((int (*)(int))func_0E6240)(n);
    if (D_0010D110[n] != p.x || D_0010D118[n] != p.y) {
        D_0010CF60[n] = p.x;
        D_0010D110[n] = p.x;
        D_0010CF58[n] = p.y;
        y = 1.0f;
        if (p.y != 0.0f) {
            y = p.y;
        }
        D_0010CF58[n] = y;
        D_0010D118[n] = y;
        func_090488();
    }
}
