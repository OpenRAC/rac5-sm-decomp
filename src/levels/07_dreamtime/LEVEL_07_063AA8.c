/* LEVEL_07:0x063AA8 -- placement copy of LEVEL_01_062DB8.c: when a level is loaded and the object changes, releases the previous handle, records the object and starts the helper with its four floats. */
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

extern State D_0024E878;
extern void func_082CA0(char *);
extern void func_082B38(void *, Object *, char **, int, int, int, int, int,
                        float, float, float, float);

static __inline__ void Fire(void *level, Object *o, char **pp)
{
    if (o != 0) {
        func_082B38(level, o, pp, 0, 0, 0, 0, 1, o->f14, o->f18, o->f1c, o->f20);
    }
}

void func_063AA8(Object *object)
{
    if (D_0024E878.level != 0 && D_0024E878.current != object) {
        if (D_0024E878.previous != 0) {
            func_082CA0(D_0024E878.previous);
        }
        D_0024E878.current = object;
        Fire(D_0024E878.level, object, &D_0024E878.previous);
    }
}
