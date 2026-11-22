/* LEVEL_15:0x1288B8 -- resets a working record, then for each of the two registered entries runs the shared per-entry setup with the entry's data, the working record and the entry's table row, and calls the follow-up on the entry's handle. */
typedef struct Work {
    char data[0x20];
} Work;

typedef struct Ent {
    int idx_00;
    char row_04[0x0C];
    int handle_10;
    char pad_14[0x0C];
} Ent;

typedef struct Out {
    char data[0xEC];
} Out;

extern Ent D_0015D578[2];
extern Out D_002F2DE8[2];
extern char *D_002A8B58;
extern void func_029480(Work *w, unsigned int a, unsigned int b, int c);
extern void func_029468(Work *w);
extern void func_1286B8(void *a, void *b, void *c, int *d);
extern void func_0C15B0(int handle);

void func_1288B8(void)
{
    Work w;
    int i;
    Ent *e;
    Ent *base;
    Out *out;
    char *row;

    func_029480(&w, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_029468(&w);
    out = D_002F2DE8;
    base = D_0015D578;
    row = base->row_04;
    e = base;
    i = 0;
    do {
        func_1286B8(out, &w, row, (int *)(D_002A8B58 + e->idx_00 * 0x34));
        row += 0x20;
        out++;
        i++;
        func_0C15B0(e->handle_10);
        e++;
    } while (i != 2);
}
