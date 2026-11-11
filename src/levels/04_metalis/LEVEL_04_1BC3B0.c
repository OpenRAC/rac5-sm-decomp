/* LEVEL_04:0x1BC3B0 -- looks up the sound info for the record's id, stores it in the slot, raises the record's two limits to at least the info's float (0.1 when unset), clears or recomputes the object's float depending on whether the sound loops, and resets the slot's counter. */
typedef struct {
    char pad00[0x28];
    float f28;
} Info;

typedef struct {
    unsigned int id;
    float f4;
    float f8;
} Rec;

typedef struct {
    int info;
    int w4;
} Slot;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    Slot *slot;
    char pad5C[0x70 - 0x5C];
    float f70;
    char pad74[2];
    unsigned char b76;
} Obj;

extern int SND_IsLooping__FPC9GDE_Sound(void *p) __asm__("SND_IsLooping__FPC9GDE_Sound");
extern int func_1364E8(unsigned int value);
extern float func_1BC6C8(void *a0);

int func_1BC3B0(Obj *o)
{
    Rec *rec;
    Slot *slot;
    Info *info;
    float lim[4];
    float t;
    float *p;
    float *q;
    float *p2;

    rec = o->rec;
    slot = o->slot;
    info = (Info *)func_1364E8(rec->id);
    slot->info = (int)info;
    if (info == 0)
        return 0;
    t = 0.1f;
    if (info->f28 != 0.0f)
        t = info->f28;
    lim[0] = t;
    q = &rec->f4;
    p = lim;
    if (*q > lim[0])
        p = q;
    *q = *p;
    q = &rec->f8;
    p2 = lim;
    if (*q > lim[0])
        p2 = q;
    *q = *p2;
    if (SND_IsLooping__FPC9GDE_Sound((void *)slot->info) != 0)
        o->f70 = 0.0f;
    else
        o->f70 = func_1BC6C8(o);
    slot->w4 = 0;
    o->b76 = 0;
    return 1;
}
