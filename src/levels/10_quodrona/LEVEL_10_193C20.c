/* LEVEL_10:0x193C20 -- placement copy of LEVEL_03_199DB0.c: proximity trigger: toggles the object's state when the player crosses a radius and, while inside the inner radius, runs the interaction prompt. */
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

extern Player D_0023E540;
extern void func_07D358(void *obj, int id, int a, int b, float f, float g);
extern char *func_130310(int id);
extern void func_0B6680(int a, void *b, void *c, int d);
extern unsigned int func_0882F0(int a);
extern int func_0BD748(int a, int b);

void func_193C20(Obj *o)
{
    float dx;
    float dz;
    float d2;

    dx = D_0023E540.x - o->x;
    dz = D_0023E540.z - o->z;
    d2 = dx * dx + dz * dz;
    if (o->state == 0) {
        if (d2 < 64.0f) {
            o->state = 1;
            func_07D358(o, 0, 0, 1, 0.2f, 0.0f);
        }
    } else if (64.0f <= d2) {
        o->state = 0;
        func_07D358(o, 1, 0, 1, 0.2f, 0.0f);
    } else if (d2 <= 6.25f) {
        func_0B6680(0, func_130310(0x1F6), 0, 0);
        if (func_0882F0(2) & 0x1000) {
            func_0BD748(0xE, 0);
        }
    }
}
