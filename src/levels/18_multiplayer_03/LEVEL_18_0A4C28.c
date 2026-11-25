/* LEVEL_18:0x0A4C28 -- placement copy of LEVEL_16_0A5CB0.c: caches one player's pointer-position and per-slot values, refreshing the derived scale when the position changed. */
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

extern Base D_001E4410;
extern float D_001ABCF8[];
extern float D_001ABD00[];
extern int D_001ABD08[];
extern int D_001ABD10[];
extern int D_001ABD18[];
extern float D_001ABEB0[];
extern float D_001ABEB8[];

extern Obj *func_111AA0(int n);
extern int func_025188(int id);
extern int func_112438(int n);
extern int func_112450(void);
extern int func_112488(void);
extern void func_0A4E80(void);

void func_0A4C28(int n)
{
    Vec2 p;
    float y;

    p = func_111AA0(n)->pos;
    D_001ABD00[n] = p.x;
    D_001ABCF8[n] = p.y;
    func_025188(D_001E4410.id);
    func_025188(D_001E4410.id + 1);
    D_001ABD18[n] = func_112438(n);
    D_001ABD08[n] = ((int (*)(int))func_112450)(n);
    D_001ABD10[n] = ((int (*)(int))func_112488)(n);
    if (D_001ABEB0[n] != p.x || D_001ABEB8[n] != p.y) {
        D_001ABD00[n] = p.x;
        D_001ABEB0[n] = p.x;
        D_001ABCF8[n] = p.y;
        y = 1.0f;
        if (p.y != 0.0f) {
            y = p.y;
        }
        D_001ABCF8[n] = y;
        D_001ABEB8[n] = y;
        func_0A4E80();
    }
}
