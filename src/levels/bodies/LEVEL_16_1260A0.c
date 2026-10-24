/* LEVEL_16:0x1260A0 -- submits the object and the camera record through the
   transform routine, then marks the sub record's flag word. */
typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Cam;

typedef struct {
    char pad0[0x58];
    int f58;
} Sub;

typedef struct {
    char pad0[0x58];
    Sub *p58;
} Obj;

extern Cam *D_001BD4F0;
extern void func_073518(void *, Cam *, float, float, float, float,
                        int, int, int, int, int, int);

void func_1260A0(Obj *a0)
{
    Cam *p = D_001BD4F0;
    Sub *s = a0->p58;

    if (p != 0) {
        func_073518(a0, p, p->f14, p->f18, p->f1C, p->f20,
                    0, 0, 0, 0, 0, 1);
    }
    s->f58 = s->f58 | 1;
}
