/* LEVEL_15:0x105538 -- finds the list item whose key matches the key of an indexed entry. */
struct Item {
    struct Item *next;
    char pad04[0x42C];
    int key;
};

struct Head {
    struct Item *first;
};

struct Node {
    struct Node *next;
    char pad04[8];
    struct Head *head;
};

struct Entry {
    char pad00[0x2C];
    int key;
    char pad30[0x6C];
};

struct Rec {
    int id;
    int b;
    int c;
};

struct Big {
    char pad[0x4103C];
    struct Rec rec[1];
};

extern struct Entry D_00170FE8[];
extern struct Entry D_002C2B90[];
extern struct Big D_002A8B58;
extern struct Node *D_002ED950;

struct Item *func_105538(int idx)
{
    struct Entry *e;
    struct Node *n;
    struct Item *it;
    int key;

    if (idx < 0) {
        e = 0;
    } else if (idx < 6) {
        e = &D_00170FE8[idx];
    } else {
        idx -= 6;
        if (D_002A8B58.rec[idx].id == -1) {
            e = 0;
        } else {
            e = &D_002C2B90[idx];
        }
    }
    if (e == 0) {
        return 0;
    }
    key = e->key;
    for (n = D_002ED950; n != 0; n = n->next) {
        for (it = n->head->first; it != 0; it = it->next) {
            if (it->key == key) {
                return it;
            }
        }
    }
    return 0;
}
