/* LEVEL_23:0x1794E0 -- placement copy of LEVEL_01_1971E0.c: gathers the objects around the owner and runs each one's class reaction handler, then records the result. */
typedef struct Item Item;
typedef int (*Handler)(float scale, Item *item, int a, int b, int c, int d, void *skip);

typedef struct Cls {
    char pad_00[0x20];
    Handler handler;
} Cls;

typedef struct Link {
    int first;
} Link;

struct Item {
    char pad_00[0x40];
    Cls *cls;
    char pad_44[0x14];
    Link *link;
};

typedef struct Own {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    Link *link;
} Own;

typedef struct Row {
    int mode;
    float scale;
    int a;
    int b;
} Row;

typedef struct Gl {
    char pad_00[0x530];
    Row row;
} Gl;

extern Gl D_001EBED8;

extern unsigned int func_01AEF8(Item **buf, int cap, float *pos, int p6, int p7, int p8, int one);
extern float func_175C20(Item *item);
extern int func_014F70(Item *item);
extern int func_035730(int first, int skip);
extern void func_014E98(int a, int b, Item *item, int result);
extern void func_1ABEF8(Own *o, Item *item, int a, int b);

void func_1794E0(Own *o, float f)
{
    Item *buf[32];
    unsigned int n;
    unsigned int i;
    Item *it;
    Cls *cls;
    Row *r;
    Gl *g;
    float scale;
    float none;
    int result;

    (void)f;
    n = func_01AEF8(buf, 0x20, o->pos, 0x129, 0x101, 2, 1);
    for (i = 0; i < n; i++) {
        none = -1.0f;
        g = &D_001EBED8;
        it = buf[i];
        if (func_175C20(it) != none) {
            if (func_014F70(it) == 0 || func_035730(it->link->first, (int)o) != 0) {
                cls = it->cls;
                if (cls->handler == 0) {
                    result = -1;
                } else {
                    r = &g->row;
                    if (r->mode < 0) {
                        scale = r->scale;
                    } else if (r->mode < 2) {
                        scale = r->scale;
                    } else if (r->mode == 2) {
                        scale = r->scale * 0.5f;
                    } else {
                        scale = r->scale;
                    }
                    result = cls->handler(scale, it, r->a, r->b, 0, 0, o);
                }
                func_014E98(*(int *)o->link, 0xD, it, result);
                if (result) {
                    func_1ABEF8(o, it, 1, 0);
                }
            }
        }
    }
}
