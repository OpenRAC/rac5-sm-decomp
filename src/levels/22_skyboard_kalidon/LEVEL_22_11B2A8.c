/* LEVEL_22:0x11B2A8 -- finds or allocates a slot in a six-entry table keyed by a float, bumping its use count. */
extern float fabsf(float x);

typedef struct {
    int handle;
    float key;
    float count;
} Ent;

typedef struct {
    char pad[0x80];
    Ent e[6];
    char pad2[8];
    int arg;
} Tab;

extern Tab D_002E7C08;
extern void func_08C860(int h, int a, int b, float x, float y, unsigned c, int d);

int func_11B2A8(float f)
{
    unsigned char i;
    unsigned char slot;
    unsigned char best;
    int hit;
    float min;

    slot = 0xFF;
    best = 0xFF;
    min = 100000.0f;
    for (i = 0; i < 6; i++) {
        hit = fabsf(D_002E7C08.e[i].key - f) <= 0.01f;
        if ((unsigned char)hit) {
            D_002E7C08.e[i].count += 1.0f;
            return i;
        }
    }
    for (i = 0; i < 6; i++) {
        if (D_002E7C08.e[i].count == 0.0f)
            slot = i;
        else if (D_002E7C08.e[i].count < min) {
            min = D_002E7C08.e[i].count;
            best = i;
        }
    }
    if (slot == 0xFF)
        slot = best;
    func_08C860(D_002E7C08.e[slot].handle, D_002E7C08.arg, 8, 1.0f / f, 1.0f, 0xFFFFFFFF, 0x808080);
    D_002E7C08.e[slot].count = 1.0f;
    D_002E7C08.e[slot].key = f;
    return slot;
}
