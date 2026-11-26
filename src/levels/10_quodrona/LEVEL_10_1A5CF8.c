/* LEVEL_10:0x1A5CF8 -- finds up to four targets near the object and calls each one's hit handler (when it has one) with a strength picked from a table by a random index. */
struct Target;

typedef struct Handlers {
    char pad_00[0x20];
    void (*hit)(struct Target *target, int kind, int count, char *pos, char *vel, char *source, float strength);
} Handlers;

typedef struct Target {
    char pad_00[0x40];
    Handlers *handlers;
} Target;

typedef struct Obj {
    char pad_00[0x20];
    char vel[0x10];
    char pos[0x10];
} Obj;

extern float D_0022ED40[];
extern int func_01BA68(Target **out, int max, char *pos, int a, int b, int c, int d, float range);
extern long long func_027B98(void);

void func_1A5CF8(Obj *object)
{
    Target *targets[4];
    unsigned int count;
    unsigned int i;
    Handlers *h;

    count = func_01BA68(targets, 4, object->pos, 0x129, 0x101, 0xAE3E, 1, 2.0f);
    for (i = 0; i < count; i++) {
        h = targets[i]->handlers;
        if (h->hit != 0) {
            h->hit(targets[i], 0, 3, object->pos, object->vel, (char *)object, D_0022ED40[((int (*)(void))func_027B98)()]);
        }
    }
}
