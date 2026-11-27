/* LEVEL_09:0x05F9B8 -- placement copy of LEVEL_01_062DB8.c: when a level is loaded and the object changes, releases the previous handle, records the object and starts the helper with its four floats. */
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

extern State D_002206F8;
extern void func_07D5B8(char *);
extern void func_07D450(void *, Object *, char **, int, int, int, int, int,
                        float, float, float, float);

static __inline__ void Fire(void *level, Object *o, char **pp)
{
    if (o != 0) {
        func_07D450(level, o, pp, 0, 0, 0, 0, 1, o->f14, o->f18, o->f1c, o->f20);
    }
}

void func_05F9B8(Object *object)
{
    if (D_002206F8.level != 0 && D_002206F8.current != object) {
        if (D_002206F8.previous != 0) {
            func_07D5B8(D_002206F8.previous);
        }
        D_002206F8.current = object;
        Fire(D_002206F8.level, object, &D_002206F8.previous);
    }
}
