/* USA LEVEL_01.REL:0x01C9C8, 424-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0x60.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Slot {
    unsigned char kind;
    unsigned char pad_01[3];
    int value;
} Slot;

typedef struct Rec {
    char pad_00[0x0C];
    Slot *slot[2];
    int w14;
    char pad_18[0x34 - 0x18];
} Rec;

typedef struct Desc {
    char pad_00[4];
    Rec *recs;
    char pad_08[0x3F - 8];
    unsigned char bit;
} Desc;

typedef struct Item {
    char pad_00[0x40];
    Desc *desc;
    unsigned char index;
} Item;

typedef struct Entry {
    int w0;
    Item *item;
} Entry;

typedef struct Group {
    char pad[0x68];
} Group;

extern Group D_0022F6F8[2];
extern Entry **D_0022F7C8;

extern int func_095EA8(Entry **list, Group *group, int a, int b, float f, int c, int d);
extern int func_1164B8(int a, int b, int w, float f, Item *item);
extern int func_020188(int a, int b, int value, int kind, float f, Item *item);

int func_01C9C8(float f, Item **out, int max, int a, int b, int c, int d, int mask, int slot)
{
    Entry **cur;
    Entry **list;
    Entry **end;
    Entry **p;
    Item **dst;
    unsigned int i;
    Item *item;
    Rec *rec;
    Slot *s;
    int count;
    int n;

    cur = D_0022F7C8;
    for (i = 0; i < 2; i++) {
        cur += func_095EA8(cur, &D_0022F6F8[i], a, b, f, c, d);
    }
    list = D_0022F7C8;
    n = cur - list;
    p = list;
    end = list + n;
    count = 0;
    if (p != end) {
        dst = out;
        do {
            item = (*p)->item;
            if (((mask >> item->desc->bit) ^ 1) & 1) {
                continue;
            }
            rec = &item->desc->recs[item->index];
            s = rec->slot[slot];
            if (s != 0) {
                if (func_020188(a, b, s->value, s->kind, f, item) == 0) {
                    continue;
                }
            } else {
                if (func_1164B8(a, b, rec->w14, f, item) == 0) {
                    continue;
                }
            }
            *dst = item;
            count++;
            dst++;
            if (count == max) {
                return count;
            }
        } while (++p != end);
    }
    return count;
}
