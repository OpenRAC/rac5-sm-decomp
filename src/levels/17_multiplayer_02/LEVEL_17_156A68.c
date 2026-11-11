/* LEVEL_17:0x156A68 -- placement copy of LEVEL_16_15D4E8.c: appends a keyed record with a float to a fixed table unless the key is present or the table is full. */
extern char *D_001B13E8;

struct Ent {
    int key;
    int a4;
    int a8;
    int aC;
    int a10;
    float f14;
};

struct Tab {
    struct Ent e[0x40];
    int count;
};

void func_156A68(int key, float f)
{
    struct Tab *t;
    unsigned int i;

    t = *(struct Tab **)(D_001B13E8 + 0x58);
    if (t->count == 0x40) {
        return;
    }
    for (i = 0; i < t->count; i++) {
        if (t->e[i].key == key) {
            return;
        }
    }
    t->e[t->count].key = key;
    t->e[t->count].aC = 0;
    t->e[t->count].a8 = 0;
    t->e[t->count].a4 = 0;
    t->e[t->count].f14 = f;
    t->count = t->count + 1;
}
