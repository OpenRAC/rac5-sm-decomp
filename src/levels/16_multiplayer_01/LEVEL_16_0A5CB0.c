/* LEVEL_16:0x0A5CB0 -- caches one player's pointer-position and per-slot values, refreshing the derived scale when the position changed. */
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

extern Base D_001E4090;
extern float D_001AA878[];
extern float D_001AA880[];
extern int D_001AA888[];
extern int D_001AA890[];
extern int D_001AA898[];
extern float D_001AAA30[];
extern float D_001AAA38[];

extern Obj *func_112CE8(int n);
extern int func_025BD8(int id);
extern int func_113680(int n);
extern int func_113698(void);
extern int func_1136D0(void);
extern void func_0A5F08(void);

void func_0A5CB0(int n)
{
    Vec2 p;
    float y;

    p = func_112CE8(n)->pos;
    D_001AA880[n] = p.x;
    D_001AA878[n] = p.y;
    func_025BD8(D_001E4090.id);
    func_025BD8(D_001E4090.id + 1);
    D_001AA898[n] = func_113680(n);
    D_001AA888[n] = ((int (*)(int))func_113698)(n);
    D_001AA890[n] = ((int (*)(int))func_1136D0)(n);
    if (D_001AAA30[n] != p.x || D_001AAA38[n] != p.y) {
        D_001AA880[n] = p.x;
        D_001AAA30[n] = p.x;
        D_001AA878[n] = p.y;
        y = 1.0f;
        if (p.y != 0.0f) {
            y = p.y;
        }
        D_001AA878[n] = y;
        D_001AAA38[n] = y;
        func_0A5F08();
    }
}
