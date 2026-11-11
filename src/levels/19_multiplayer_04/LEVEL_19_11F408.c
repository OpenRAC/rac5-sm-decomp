/* LEVEL_19:0x11F408 -- placement copy of LEVEL_16_11EAA0.c: points the global cursor at its table, sets its count to 3, clears a flag and runs the shared reset. */
typedef struct {
    void *cur;
    int count;
} Cursor;

extern char D_001BBDB8[];
extern Cursor D_001BBDC8;
extern int D_002E17BC;
extern void func_11E7D0(void);

void func_11F408(void)
{
    D_002E17BC = 0;
    D_001BBDC8.cur = D_001BBDB8;
    D_001BBDC8.count = 3;
    func_11E7D0();
}
