/* LEVEL_16:0x168C20 -- advances the selected slot index (wrapping after 5) to the next slot whose entry is set. */
typedef struct {
    char pad0[0x6A];
    unsigned char sel;
} Info;

typedef struct {
    char pad0[0x54];
    int *slots;
    Info *info;
} Obj;

static __inline__ unsigned int Next(unsigned int i)
{
    return i == 5 ? 0 : (unsigned char)(i + 1);
}

unsigned int func_168C20(Obj *o)
{
    unsigned int i;
    int *tab = o->slots;

    i = Next(o->info->sel);
    tab += 2;
    while (*(int *)((char *)tab + (i << 2)) == 0) {
        i = Next(i);
    }
    return i;
}
