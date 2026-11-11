/* LEVEL_19:0x0C7C18 -- placement copy of LEVEL_01_0D8C48.c: walks a ring of 0x1C-byte entries and draws each one's primary and optional secondary parts. */
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

extern void func_0C7318(unsigned int count, int a, int b, unsigned int *start, unsigned int *end);
extern int func_0C7398(unsigned int count, int a);
extern void func_0970A8(void *p);
extern void func_0C7758(Obj *o, int idx, Rect *r, int *color);
extern void func_09B4D0(int h, Rect *r, int color);
extern void func_096618(Rect *r, int v);
extern void func_096668(Rect *r, int v);
extern void func_0966D0(Rect *r, int v);
extern void func_096720(Rect *r, int v);
extern void func_097028(void);

void func_0C7C18(Obj *o)
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
        func_0C7318(o->count, o->p2, o->p3, &start, &end);
        first = func_0C7398(o->count, o->p2);
        func_0970A8(o->sub);
        idx = first;
        i = start;
        do {
            c = 0xFF808080;
            e = o->tab + i;
            func_0C7758(o, idx, &r, &color);
            if (e->flag)
                c = color;
            func_09B4D0(e->a, &r, c);
            if (e->b != 0) {
                b = r;
                x = r.w[2];
                y = r.w[3];
                func_096618(&b, 8);
                x -= 4;
                func_096668(&b, 0x10);
                y -= 8;
                func_0966D0(&b, x);
                func_096720(&b, y);
                func_09B4D0(e->b, &b, c);
            }
            idx++;
            if (i == end)
                done = 1;
            i++;
            if (i >= o->count)
                i = 0;
        } while (!done);
        func_097028();
    }
}
