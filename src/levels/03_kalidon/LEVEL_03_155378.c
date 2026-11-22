/* LEVEL_03:0x155378 -- placement copy of LEVEL_01_155EE8.c: three-state pickup tracker: grabs a record, eases a cursor onto it, then counts down and releases. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char *rec;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    char pad1C[4];
    char *held;
} Info;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Info *info;
    char pad58[0x70 - 0x58];
    float timer;
} Obj;

extern char D_0024FFC0[];

extern int func_039FA8(char *record);
extern void func_03A0C0(void *obj);
extern void func_03A048(void *o, int clear);
extern int func_039F78(char *object);
extern void func_0033F8(float f12, float f13);
extern void func_003720(float x, int a, float y, int b);
extern void func_003750(float x, int a, float y, int b);
extern void func_003780(int a, float x, float y, int b);
extern void func_003870(float x, int a, float y, int b);
extern void func_0038C0(void *first, void *second, float x, float y);
extern void func_003410(int first, int second, int third);
extern void func_003BD8(int value);
extern void func_0033A8(char *src);
extern void func_003198(float rate, Vec3 *pos, int snap);

void func_155378(Obj *o)
{
    Info *info;
    char *h;
    char *item;
    unsigned int i;
    int rec;
    float k;
    float f;
    Vec3 v;
    Vec3 *p;

    info = o->info;
    switch (o->state) {
    case 1:
        for (i = 0; i < 1; i++) {
            rec = func_039FA8(D_0024FFC0);
            func_03A0C0(D_0024FFC0);
            if (rec != 0 && (int)info->rec == rec) {
                o->state = 2;
                func_0033A8(info->rec + 0x20);
                p = (Vec3 *)(info->rec + 0x30);
                v.x = p->x;
                v.y = p->y;
                v.z = p->z;
                v.y = v.y + 0.8f;
                func_003198(0.033333335f, &v, 0);
                func_03A048(D_0024FFC0, 1);
                info->held = D_0024FFC0;
                info->f18 = 1.0f;
                return;
            }
        }
        return;
    case 2:
        h = info->held;
        func_03A0C0(h);
        k = 1.0f;
        func_0033F8(0.0f, 0.0f);
        if (!(info->f18 < 0.033333335f)) {
            k = 0.033333335f / info->f18;
        }
        func_003720(info->f04, 100, k, 1);
        func_003750(info->f08 - 0.8f, 100, k, 1);
        func_003780(100, info->f14, k, 1);
        func_003870(info->f10, 100, k, 1);
        func_0038C0((void *)100, (void *)1, info->f0C - 0.8f, k);
        func_003410(0, 1, 1);
        func_003BD8(0);
        func_03A048(h, 1);
        f = info->f18 - 0.033333335f;
        info->f18 = f;
        if (f < 0.0f) {
            info->f18 = 0.0f;
        }
        if (func_039F78(h) == 0) {
            o->state = 3;
            o->timer = 10.000199317932129f;
        }
        return;
    case 3:
        func_03A0C0(info->held);
        func_003410(0, 1, 1);
        func_003BD8(0);
        f = o->timer - 1.0f;
        o->timer = f;
        if (f <= 0.0f) {
            info->held = 0;
            o->state = 1;
        }
        return;
    }
}
