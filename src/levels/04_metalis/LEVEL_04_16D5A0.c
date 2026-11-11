/* LEVEL_04:0x16D5A0 -- finds up to four targets for the object and calls each one's hit handler (when it has one) with the object's position and parameters. */
struct Target;

typedef struct Handlers {
    char pad_00[0x20];
    void (*hit)(struct Target *target, int kind, int count, char *pos, char *vel, char *source, float strength);
} Handlers;

typedef struct Target {
    char pad_00[0x40];
    Handlers *handlers;
} Target;

typedef struct Params {
    float range;
    float strength;
} Params;

typedef struct Obj {
    char pad_00[0x30];
    char pos[0x24];
    Params *params;
} Obj;

extern int func_01C068(Target **out, int max, char *pos, int a, int b, int c, int d, float range);

void func_16D5A0(Obj *object)
{
    Target *targets[4];
    Params *params = object->params;
    unsigned int count;
    unsigned int i;

    count = func_01C068(targets, 4, object->pos, 0x129, 0x101, 0xAE3E, 1, params->range);
    for (i = 0; i < count; i++) {
        if (targets[i]->handlers->hit != 0)
            targets[i]->handlers->hit(targets[i], 2, 1, object->pos, (char *)object + 0x20, (char *)object, params->strength);
    }
}
