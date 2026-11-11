/* LEVEL_02:0x1CE4A8 -- checks three flag bytes of the global status block and, for each that is armed and past its threshold (the third also needs a live cursor entry that is not yet claimed), raises the notification and marks the flag as fired. */
typedef struct Entry {
    char pad_00[0x64];
    unsigned int flags;
} Entry;

typedef struct Cursor {
    Entry *entry;
    unsigned int index;
} Cursor;

typedef struct Obj {
    char pad_00[0x54];
    Cursor *cursor;
} Obj;

extern unsigned char D_00248430[];
extern char D_0023F838[];
extern int D_0023F880[];
extern void func_0BF878(void *first, void *second);
extern void func_027CB8(int index, unsigned char value, unsigned char bit);
extern int func_0891A0(int *keys, int nkeys, char **out, unsigned int *idx);

void func_1CE4A8(Obj *o)
{
    Cursor *c = o->cursor;

    if (D_00248430[0xC] == 1 && D_00248430[8] >= 4) {
        do {
            func_0BF878(D_0023F838, (void *)0x2B8);
            func_027CB8(0x77, 0xFF, 4);
            D_00248430[0xC] = 0x40;
        } while (0);
    }
    if (D_00248430[0xD] == 1 && D_00248430[9] >= 0xB) {
        do {
            func_0BF878(D_0023F838, (void *)0x2B8);
            func_027CB8(0x77, 0xFF, 5);
            D_00248430[0xD] = 0x40;
        } while (0);
    }
    if (D_00248430[0xE] == 1 && c->entry != 0 && (c->entry->flags & 1) == 0
        && func_0891A0(D_0023F880, 5, (char **)&c->entry, &c->index) == 0) {
        do {
            func_0BF878(D_0023F838, (void *)0x2B8);
            func_027CB8(0x77, 0xFF, 6);
            D_00248430[0xE] = 0x40;
        } while (0);
    }
}
