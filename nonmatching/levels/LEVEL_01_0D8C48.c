/* LEVEL_01.REL:0x0D8C48: reviewed 428-byte candidate, held for ABI review.
 * Walks a ring of 0x1C-byte entries and draws each one's primary and optional
 * secondary parts.
 * pinned C with gnu-ee-trial links 428/428 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0AD550 returning void with (int, pointer, int), but the
 * accepted LEVEL_01_0AD520.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Rect {
    int w[4];
} Rect;

typedef struct Entry {
    unsigned char flag;
    char pad[3];
    int a;
    int b;
    int pad2[4];
} Entry;

typedef struct Obj {
    Entry *tab;
    unsigned int count;
    int p2;
    int p3;
    char pad[0x54 - 0x10];
    char sub[1];
} Obj;

extern void func_0D8348(unsigned int count, int a, int b, unsigned int *start, unsigned int *end);
extern int func_0D83C8(unsigned int count, int a);
extern void func_0A9128(void *p);
extern void func_0D8788(Obj *o, int idx, Rect *r, int *color);
extern void func_0AD550(int h, Rect *r, int color);
extern void func_0A86F8(Rect *r, int v);
extern void func_0A8748(Rect *r, int v);
extern void func_0A87B0(Rect *r, int v);
extern void func_0A8800(Rect *r, int v);
extern void func_0A90A8(void);

void func_0D8C48(Obj *o)
{
    Rect r;
    Rect b;
    unsigned int start;
    unsigned int end;
    int color;
    int idx;
    int first;
    unsigned int i;
    int done;
    Entry *e;
    int c;
    int x;
    int y;

    if (o->count != 0) {
        start = 0;
        end = 0;
        done = 0;
        func_0D8348(o->count, o->p2, o->p3, &start, &end);
        first = func_0D83C8(o->count, o->p2);
        func_0A9128(o->sub);
        idx = first;
        i = start;
        do {
            c = 0xFF808080;
            e = o->tab + i;
            func_0D8788(o, idx, &r, &color);
            if (e->flag)
                c = color;
            func_0AD550(e->a, &r, c);
            if (e->b != 0) {
                b = r;
                x = r.w[2];
                y = r.w[3];
                func_0A86F8(&b, 8);
                x -= 4;
                func_0A8748(&b, 0x10);
                y -= 8;
                func_0A87B0(&b, x);
                func_0A8800(&b, y);
                func_0AD550(e->b, &b, c);
            }
            idx++;
            if (i == end)
                done = 1;
            i++;
            if (i >= o->count)
                i = 0;
        } while (!done);
        func_0A90A8();
    }
}
