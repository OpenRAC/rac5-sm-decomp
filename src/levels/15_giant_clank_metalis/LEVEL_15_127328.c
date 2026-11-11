/* LEVEL_15:0x127328 -- fills three output records from a source record array through two helpers, then runs a finish step. */

struct Src_127328 {
    int key;
    unsigned int flags;
    char pad[0x14];
    char blkA[0x30];
    char blkB[0x30];
};

struct Dst_127328 {
    int word;
    char blk[0x38];
};

struct Tab_127328 {
    struct Dst_127328 rec[3];
    int tag;
};

extern int D_001AFE00[];
extern struct Src_127328 D_0015D3F8[];
extern struct Tab_127328 D_002F2D20;

extern int func_13D850(unsigned int a0);
extern int func_126950(unsigned int a0);
extern void func_126998(void *a0, int a1, void *a2, int a3, void *t0);
extern void func_127458(void);

void func_127328(void)
{
    int i;
    int v;
    int key;
    unsigned int flags;

    D_002F2D20.tag = func_13D850((D_001AFE00[48] << 16) | 0xA0001044u);
    for (i = 0; i < 3; i++) {
        key = D_0015D3F8[i].key;
        flags = D_0015D3F8[i].flags;
        if (key != -1) {
            v = D_001AFE00[key];
        } else {
            v = 0x7FC;
        }
        D_002F2D20.rec[i].word = func_126950((flags & 0xF800FFFFu) | (v << 16));
        func_126998(D_002F2D20.rec[i].blk, D_002F2D20.rec[i].word, D_0015D3F8[i].blkA,
                    D_002F2D20.tag, D_0015D3F8[i].blkB);
    }
    func_127458();
}
