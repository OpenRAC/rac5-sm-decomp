/* LEVEL_02:0x15B4F8 -- placement copy of LEVEL_01_154C80.c: collects ids and positions of type-2 entries within a radius. */
typedef struct Item {
    unsigned short type;
    char pad02[0x26];
    float pos[3];
    char pad34[0x24];
    int id;
    char pad5C[0x28];
} Item;

typedef struct Node {
    struct Node *next;
    int pad04[2];
    Item *items;
    int count;
} Node;

extern Node *D_003A92E4;

int func_15B4F8(int *out, float *outPos, int max, float *pos, float rad2)
{
    int *p;
    int *end;
    Node *n;
    Item *it;
    Item *itEnd;
    float x, y, z;

    p = out;
    end = out + max;
    x = pos[0];
    y = pos[1];
    z = pos[2];
    for (n = D_003A92E4; n != 0; n = n->next) {
        it = n->items;
        itEnd = it + n->count;
        do {
            if (it->type == 2) {
                float dx, dy, dz;
                float a, b, c;
                a = it->pos[0];
                b = it->pos[1];
                c = it->pos[2];
                dx = x - a;
                dy = y - b;
                dz = z - c;
                if (dx * dx + dy * dy + dz * dz < rad2) {
                    if (p == end) {
                        return p - out;
                    }
                    *p = it->id;
                    p++;
                    outPos[0] = a;
                    outPos[1] = b;
                    outPos[2] = c;
                    outPos += 3;
                }
            }
            it++;
        } while (it != itEnd);
    }
    return p - out;
}
