/* LEVEL_06:0x18C278 -- placement copy of LEVEL_01_195898.c: when the linked record is flagged and matches the key, forwards its progress ratio (capped at 1) to the helper. */
typedef struct {
    int id;
    char pad_04[8];
    float progress;
    char pad_10[0x1C];
    float total;
    char pad_30[0x15C];
    unsigned int flags;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec;
} Owner;

typedef struct {
    int id;
} Key;

extern void func_0AF3F8(float ratio, int a, int b);

void func_18C278(Owner *o, Key *key)
{
    Rec *rec = o->rec;

    if ((rec->flags & 1) != 0 && rec->id == key->id) {
        float ratio = rec->progress / rec->total;

        if (1.0f < ratio) {
            ratio = 1.0f;
        }
        func_0AF3F8(ratio, 0, 3);
    }
}
