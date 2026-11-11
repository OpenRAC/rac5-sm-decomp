/* LEVEL_05:0x1A0500 -- placement copy of LEVEL_01_1A5F00.c: state machine of an object: state 0 starts its sequence, otherwise it advances the step index when the progress value reaches the step threshold, and in state 1 switches to 2 (with a sound) once the progress passes 0.1, while in state 2 it finishes: sets a flag bit, returns to state 0 and clears the current slot of its record. */
struct Rec {
    int slots[1];
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x11];
    struct Rec *f58;
    char pad5C[8];
    unsigned int w64;
};

extern char D_00220E40[];
extern float D_002139F0[];

extern int func_1A0610(struct Obj *o, char *a, int idx, float dt);
extern float func_07A118(void *a0);
extern void func_03A100(char *a, int id);
extern int func_07A140(char *a0, int a1);

void func_1A0500(struct Obj *o, float dt)
{
    float progress;
    unsigned char idx;

    if (o->b45 == 0) {
        func_1A0610(o, D_00220E40, 0, dt);
    } else {
        progress = func_07A118(o);
        idx = o->b46;
        if (D_002139F0[idx] <= progress) {
            o->b46 = idx + 1;
        }
        if (o->b45 == 1) {
            if (0.1f < func_07A118(o)) {
                o->b45 = 2;
                func_03A100(D_00220E40, 0x29);
                return;
            }
        }
        if (o->b45 == 2) {
            if (func_07A140((char *)o, 0) != 0) {
                o->w64 = o->w64 | 0x20;
                o->b45 = 0;
                o->f58->slots[o->f58->slots[4]] = 0;
            }
        }
    }
}
