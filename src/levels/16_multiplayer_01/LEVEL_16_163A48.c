/* LEVEL_16:0x163A48 -- scans a pointer table and reports whether any non-null entry accepts the point. */
typedef struct {
    int pad0;
    unsigned int count;
} Info;

typedef struct {
    char pad0[0x54];
    void **table;
    Info *info;
} Obj;

extern int func_076838(void *, void *, void *);

int func_163A48(Obj *o, char *arg)
{
    int found = 0;
    unsigned int index;
    void **table = o->table;
    Info *info = o->info;

    for (index = 0; index < info->count; index++) {
        void *item = table[index];
        if (item != 0)
            found = (unsigned char)func_076838(item, arg, arg + 8) ? 1 : found;
    }
    return found;
}
