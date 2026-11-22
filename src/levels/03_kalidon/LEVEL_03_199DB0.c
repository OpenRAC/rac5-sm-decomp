/* LEVEL_03:0x199DB0 -- proximity trigger: toggles the object's state when the player crosses a radius and, while inside the inner radius, runs the interaction prompt. */
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

extern Player D_0024FFC0;
extern void func_07CB08(void *obj, int id, int a, int b, float f, float g);
extern char *func_130878(int id);
extern void func_0B5290(int a, void *b, void *c, int d);
extern unsigned int func_087DE0(int a);
extern int func_0BC1E8(int a, int b);

void func_199DB0(Obj *o)
{
    float dx;
    float dz;
    float d2;

    dx = D_0024FFC0.x - o->x;
    dz = D_0024FFC0.z - o->z;
    d2 = dx * dx + dz * dz;
    if (o->state == 0) {
        if (d2 < 64.0f) {
            o->state = 1;
            func_07CB08(o, 0, 0, 1, 0.2f, 0.0f);
        }
    } else if (64.0f <= d2) {
        o->state = 0;
        func_07CB08(o, 1, 0, 1, 0.2f, 0.0f);
    } else if (d2 <= 6.25f) {
        func_0B5290(0, func_130878(0x1F6), 0, 0);
        if (func_087DE0(2) & 0x1000) {
            func_0BC1E8(0xE, 0);
        }
    }
}
