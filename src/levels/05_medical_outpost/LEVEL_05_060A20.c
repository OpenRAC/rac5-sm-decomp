/* LEVEL_05:0x060A20 -- placement copy of LEVEL_01_062DB8.c: when a level is loaded and the object changes, releases the previous handle, records the object and starts the helper with its four floats. */
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

extern State D_00224C78;
extern void func_07E1D8(char *);
extern void func_07E070(void *, Object *, char **, int, int, int, int, int,
                        float, float, float, float);

static __inline__ void Fire(void *level, Object *o, char **pp)
{
    if (o != 0) {
        func_07E070(level, o, pp, 0, 0, 0, 0, 1, o->f14, o->f18, o->f1c, o->f20);
    }
}

void func_060A20(Object *object)
{
    if (D_00224C78.level != 0 && D_00224C78.current != object) {
        if (D_00224C78.previous != 0) {
            func_07E1D8(D_00224C78.previous);
        }
        D_00224C78.current = object;
        Fire(D_00224C78.level, object, &D_00224C78.previous);
    }
}
