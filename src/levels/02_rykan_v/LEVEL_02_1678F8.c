/* LEVEL_02:0x1678F8 -- walks the object's eight-entry table and, for each used entry flagged 2 with a valid slot, issues the shared call; then runs the per-slot handler for every active byte of the seven-slot table. */
typedef struct {
    int w0;
    char pad04[0x10];
    unsigned char b14;
    char pad15;
    unsigned char b16;
    char pad17;
} Ent;

typedef struct {
    Ent ents[8];
    int wC0;
    char padC4[8];
    unsigned char slots[7];
} Pool;

typedef struct {
    char pad00[0x54];
    Pool *pool;
} Obj;

extern void func_1D95D0(int a, int b, int c);
extern void func_168B10(char *a0, unsigned char a1);

void func_1678F8(Obj *o)
{
    Pool *pool;
    Ent *e;
    unsigned char i;

    pool = o->pool;
    i = 0;
    do {
        e = &pool->ents[i];
        if (e->w0 != 0) {
            if (e->b14 & 2) {
                if (e->b16 != 0xFF) {
                    func_1D95D0(pool->wC0, e->w0, e->b16);
                }
            }
        }
        i++;
    } while (i < 8);
    i = 0;
    do {
        if (pool->slots[i] != 0) {
            func_168B10((char *)pool, i);
        }
        i++;
    } while (i < 7);
}
