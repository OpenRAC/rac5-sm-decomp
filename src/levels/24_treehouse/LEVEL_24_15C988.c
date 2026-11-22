/* LEVEL_24:0x15C988 -- placement copy of LEVEL_03_1768C8.c: ages every record of the owner's chunk lists (dropping records whose age passed 1.0 by swapping in the last one), then queries the world around each remaining record and notifies the hits of the matching kind. */
typedef struct {
    float x;
    float y;
    float z;
    float age;
} Rec;

typedef struct Node Node;
struct Node {
    Node *next;
    int pad4;
    int pad8;
    Rec *recs;
    int count;
};

typedef struct {
    char pad0[8];
    Node *head;
} Owner;

typedef struct {
    char pad0[0x24];
    unsigned int kind;
} Type;

typedef struct {
    char pad0[0x40];
    Type *type;
} Hit;

extern int func_01A9D8(Hit **out, int cap, Rec *r, int a, int b, int c, int d, float x);
extern void func_15E1E0(Hit *h);
extern float fabsf(float x);

void func_15C988(Owner *ow)
{
    Node *node;
    Rec *r;
    Rec *end;
    Node *node2;
    Rec *r2;
    Rec *end2;
    Rec *next;
    Hit *buf[8];
    Hit **p;
    Hit **pe;
    float age;

    for (node = ow->head; node != 0; node = node->next) {
        r = node->recs;
        end = r + node->count;
        do {
            if (1.0f < r->age) {
                end--;
                *r = *end;
            } else {
                r->age = r->age + 0.14285715f;
                r++;
            }
        } while (r != end);
        node->count = end - node->recs;
    }
    for (node2 = ow->head; node2 != 0; node2 = node2->next) {
        r2 = node2->recs;
        end2 = r2 + node2->count;
        for (; r2 != end2; r2++) {
            age = r2->age;
            pe = buf + func_01A9D8(buf, 8, r2, 0x1C7F, 0x1411, 0x10, 0, ((age + 1.0f) - fabsf(1.0f - age)) * 0.5f * 2.5f);
            for (p = buf; p != pe; p++) {
                if ((*p)->type->kind == 0x663778B5) {
                    func_15E1E0(*p);
                }
            }
        }
    }
}
