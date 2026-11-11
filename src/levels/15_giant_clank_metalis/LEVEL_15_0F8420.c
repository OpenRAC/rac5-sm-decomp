/* LEVEL_15:0x0F8420 -- opens a draw batch, walks every pool of the object's chain and issues one draw call per 0x48-byte entry (record slot advanced by 0x90, direction normalised through 1/sqrt of its length), then closes the batch. */
struct Rec;

typedef struct R {
    char pad00[8];
    char *w08;
} R;

typedef struct Sub {
    char pad00[0x11C];
    R *p11C;
} Sub;

typedef struct {
    char pad00[0x18];
    float f18;
    float f1C;
    float f20;
    char pad24[0x20];
    Sub *p44;
} Item;

typedef struct Node {
    struct Node *next;
    char pad04[8];
    Item *items;
    int count;
} Node;

typedef struct {
    char pad00[8];
    Node *list;
    char pad0C[0x10];
    void *w1C;
} Obj;

extern float sqrtf(float x);
extern int *D_0015B710;
extern int func_13B6B8(int *buf, char *src);
extern void func_029CF8(struct Rec *a0, void *a1, void *a2, void *a3, int t0, int t1, float f);
extern void func_13B7B0(void *ctx, char *dst, int a, int b, int c);

void func_0F8420(Obj *o)
{
    int buf[4];
    void *ctx;
    int val;
    int tok;
    Node *node;
    Item *item;
    Item *end;
    char *cur;
    char *dst;
    R *r;
    float inv;

    ctx = o->w1C;
    val = *D_0015B710;
    dst = (char *)o + 0x24;
    tok = func_13B6B8(buf, (char *)o + 0x44);
    for (node = o->list; node != 0; node = node->next) {
        item = node->items;
        end = item + node->count;
        if (item != end) {
            do {
                r = item->p44->p11C;
                cur = r->w08;
                r->w08 = cur + 0x90;
                inv = 1.0f / sqrtf(item->f18 * item->f18 + item->f1C * item->f1C + item->f20 * item->f20);
                func_029CF8((struct Rec *)cur, ctx, item, (char *)item + 0x24, val, 1, inv);
                item++;
            } while (item != end);
        }
    }
    func_13B7B0(ctx, dst, 1, tok, buf[0]);
}
