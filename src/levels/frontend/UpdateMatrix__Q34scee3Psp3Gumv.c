/* FRONTEND:0x006320 -- flushes the matrix-stack record: marks the current slot with the matrix pointer, negates the first slot's first float when the record's mode byte is set and it is positive, uploads every dirty slot, runs the pending commit helpers and resets the flags. */
typedef struct {
    unsigned char mode;
    char pad01[3];
    int offset;
    unsigned char dirty[6];
    char pad0E[2];
    float *m;
    float *slot[4];
} Rec;

extern Rec D_0010EA90;
extern void func_005EF8();
extern void func_007130(void);
extern void func_007080(void);
extern void func_006FA8(void);

void UpdateMatrix__Q34scee3Psp3Gumv(void)
{
    Rec *g;
    float *p;

    g = &D_0010EA90;
    if (g->dirty[g->offset] != 0)
        g->slot[g->offset] = g->m;
    if (g->dirty[0] != 0) {
        if (D_0010EA90.mode != 0) {
            p = g->slot[0];
            if (0.0f < *p)
                *p = -*p;
            func_005EF8(0, g->slot[0]);
        } else {
            func_005EF8(0, g->slot[0]);
        }
    }
    if (D_0010EA90.dirty[3] != 0)
        func_005EF8(3, D_0010EA90.slot[3]);
    if (D_0010EA90.dirty[1] != 0)
        func_005EF8(1, D_0010EA90.slot[1]);
    if (D_0010EA90.dirty[2] != 0)
        func_005EF8(2, D_0010EA90.slot[2]);
    if (D_0010EA90.dirty[4] != 0)
        func_007130();
    if (D_0010EA90.dirty[5] != 0)
        func_007080();
    func_006FA8();
    D_0010EA90.dirty[0] = 0;
    D_0010EA90.dirty[1] = 0;
    D_0010EA90.dirty[2] = 0;
    D_0010EA90.dirty[3] = 0;
    D_0010EA90.dirty[4] = 1;
    D_0010EA90.dirty[5] = 1;
}
