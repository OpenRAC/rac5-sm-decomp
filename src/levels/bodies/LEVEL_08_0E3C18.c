/* LEVEL_08:0x0E3C18 -- placement copy of LEVEL_01_0D8C48.c: walks a ring of 0x1C-byte entries and draws each one's primary and optional secondary parts. */
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

extern void func_0E3318(unsigned int count, int a, int b, unsigned int *start, unsigned int *end);
extern int func_0E3398(unsigned int count, int a);
extern void func_0B3A60(void *p);
extern void func_0E3758(Obj *o, int idx, Rect *r, int *color);
extern void func_0B7E88(int h, Rect *r, int color);
extern void func_0B2FF0(Rect *r, int v);
extern void func_0B3040(Rect *r, int v);
extern void func_0B30A8(Rect *r, int v);
extern void func_0B30F8(Rect *r, int v);
extern void func_0B39E0(void);

void func_0E3C18(Obj *o)
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
        func_0E3318(o->count, o->p2, o->p3, &start, &end);
        first = func_0E3398(o->count, o->p2);
        func_0B3A60(o->sub);
        idx = first;
        i = start;
        do {
            c = 0xFF808080;
            e = o->tab + i;
            func_0E3758(o, idx, &r, &color);
            if (e->flag)
                c = color;
            func_0B7E88(e->a, &r, c);
            if (e->b != 0) {
                b = r;
                x = r.w[2];
                y = r.w[3];
                func_0B2FF0(&b, 8);
                x -= 4;
                func_0B3040(&b, 0x10);
                y -= 8;
                func_0B30A8(&b, x);
                func_0B30F8(&b, y);
                func_0B7E88(e->b, &b, c);
            }
            idx++;
            if (i == end)
                done = 1;
            i++;
            if (i >= o->count)
                i = 0;
        } while (!done);
        func_0B39E0();
    }
}
