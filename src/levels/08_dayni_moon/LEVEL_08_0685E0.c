/* LEVEL_08:0x0685E0 -- placement copy of LEVEL_01_062DB8.c: when a level is loaded and the object changes, releases the previous handle, records the object and starts the helper with its four floats. */
typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
} Object;

typedef struct {
    char pad[0x16c];
    void *level;
    int unused;
    char *previous;
    Object *current;
} State;

extern State D_00288208;
extern void func_088AA8(char *);
extern void func_088940(void *, Object *, char **, int, int, int, int, int,
                        float, float, float, float);

static __inline__ void Fire(void *level, Object *o, char **pp)
{
    if (o != 0) {
        func_088940(level, o, pp, 0, 0, 0, 0, 1, o->f14, o->f18, o->f1c, o->f20);
    }
}

void func_0685E0(Object *object)
{
    if (D_00288208.level != 0 && D_00288208.current != object) {
        if (D_00288208.previous != 0) {
            func_088AA8(D_00288208.previous);
        }
        D_00288208.current = object;
        Fire(D_00288208.level, object, &D_00288208.previous);
    }
}
