/* LEVEL_17:0x0A5190 -- placement copy of LEVEL_16_0A5CB0.c: caches one player's pointer-position and per-slot values, refreshing the derived scale when the position changed. */
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

extern Base D_001D5390;
extern float D_0019DE78[];
extern float D_0019DE80[];
extern int D_0019DE88[];
extern int D_0019DE90[];
extern int D_0019DE98[];
extern float D_0019E030[];
extern float D_0019E038[];

extern Obj *func_112478(int n);
extern int func_025558(int id);
extern int func_112E10(int n);
extern int func_112E28(void);
extern int func_112E60(void);
extern void func_0A53E8(void);

void func_0A5190(int n)
{
    Vec2 p;
    float y;

    p = func_112478(n)->pos;
    D_0019DE80[n] = p.x;
    D_0019DE78[n] = p.y;
    func_025558(D_001D5390.id);
    func_025558(D_001D5390.id + 1);
    D_0019DE98[n] = func_112E10(n);
    D_0019DE88[n] = ((int (*)(int))func_112E28)(n);
    D_0019DE90[n] = ((int (*)(int))func_112E60)(n);
    if (D_0019E030[n] != p.x || D_0019E038[n] != p.y) {
        D_0019DE80[n] = p.x;
        D_0019E030[n] = p.x;
        D_0019DE78[n] = p.y;
        y = 1.0f;
        if (p.y != 0.0f) {
            y = p.y;
        }
        D_0019DE78[n] = y;
        D_0019E038[n] = y;
        func_0A53E8();
    }
}
