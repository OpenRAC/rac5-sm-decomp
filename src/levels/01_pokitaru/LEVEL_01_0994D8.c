/* LEVEL_01:0x0994D8 -- appends a 20-byte record to a per-index table and bumps its count. */
struct Rec_0994D8 {
    int w0;
    short h4;
    char b6;
    char pad7;
    short h8;
    short pada;
    int wc;
    int w10;
};
struct Ch_0029AEF8 {
    char pad0[0x240];
    struct Rec_0994D8 rec[128];
    int count;
    char pad[2760];
};
extern struct Ch_0029AEF8 D_0029AEF8[];

void func_0994D8(int first, int second, int third, int index)
{
    int slot = D_0029AEF8[index].count;

    if (slot < 128) {
        struct Rec_0994D8 *rec = D_0029AEF8[index].rec;
        struct Rec_0994D8 *r = &rec[slot];
        r->w10 = second;
        r->w0 = third;
        r->h8 = slot;
        r->wc = first;
        r->b6 = 0;
        r->h4 = 0;
        D_0029AEF8[index].count++;
    }
}
