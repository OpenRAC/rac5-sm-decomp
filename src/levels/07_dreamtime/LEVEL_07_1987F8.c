/* LEVEL_07:0x1987F8 -- turns the stored offsets of the object resource block into pointers (the second must have a valid target, else it is cleared and the call reports 0); when both succeed, resets the sub-state, starts the effect and reports 1. */
/* LEVEL_07:0x1987F8 -- turns the stored offsets of the object's resource block into pointers (the second must have a valid target, else it is cleared and the call reports 0); when both succeed, resets the state byte, starts the effect and reports 1. */
extern char *D_0021B094;
extern char D_0021CFB0[];
extern char D_0022CB88[];

typedef struct Info {
    int w00;
    int w04;
} Info;

typedef struct Obj {
    char pad00[0x46];
    unsigned char sub;
    char pad47[0x54 - 0x47];
    Info *info;
} Obj;

extern void func_127410(void *a0, void *a1, float v);

static __inline__ int Reloc(int *slot)
{
    int off = *slot;

    if (off == 0) {
        return 0;
    }
    *slot = (int)(D_0021B094 + off);
    return 1;
}

static __inline__ int RebaseChecked(int *slot)
{
    char *entry;

    if (*slot == 0) {
        return 0;
    }
    entry = D_0021B094 + *slot;
    if (*(int *)(entry + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)entry;
    return 1;
}

int func_1987F8(Obj *o)
{
    Info *info = o->info;

    if (Reloc(&info->w00) && RebaseChecked(&info->w04)) {
        o->sub = 0;
        func_127410(D_0021CFB0, D_0022CB88, 0.0036600001621991396f);
        return 1;
    }
    return 0;
}
