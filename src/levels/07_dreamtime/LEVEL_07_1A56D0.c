/* LEVEL_07:0x1A56D0 -- placement copy of LEVEL_03_199DB0.c: proximity trigger: toggles the object's state when the player crosses a radius and, while inside the inner radius, runs the interaction prompt. */
typedef struct Obj {
    char pad_00[0x30];
    float x;
    char pad_34[4];
    float z;
    char pad_3C[0x45 - 0x3C];
    unsigned char state;
} Obj;

typedef struct Player {
    char pad_00[0x30];
    float x;
    char pad_34[4];
    float z;
} Player;

extern Player D_0024AA40;
extern void func_07EE90(void *obj, int id, int a, int b, float f, float g);
extern char *func_1354B0(int id);
extern void func_0B7508(int a, void *b, void *c, int d);
extern unsigned int func_08A058(int a);
extern int func_0BE460(int a, int b);

void func_1A56D0(Obj *o)
{
    float dx;
    float dz;
    float d2;

    dx = D_0024AA40.x - o->x;
    dz = D_0024AA40.z - o->z;
    d2 = dx * dx + dz * dz;
    if (o->state == 0) {
        if (d2 < 64.0f) {
            o->state = 1;
            func_07EE90(o, 0, 0, 1, 0.2f, 0.0f);
        }
    } else if (64.0f <= d2) {
        o->state = 0;
        func_07EE90(o, 1, 0, 1, 0.2f, 0.0f);
    } else if (d2 <= 6.25f) {
        func_0B7508(0, func_1354B0(0x1F6), 0, 0);
        if (func_08A058(2) & 0x1000) {
            func_0BE460(0xE, 0);
        }
    }
}
