/* LEVEL_18:0x11DB58 -- placement copy of LEVEL_16_11EAA0.c: points the global cursor at its table, sets its count to 3, clears a flag and runs the shared reset. */
typedef struct {
    void *cur;
    int count;
} Cursor;

extern char D_001BC0C0[];
extern Cursor D_001BC0D0;
extern int D_002E19BC;
extern void func_11CF20(void);

void func_11DB58(void)
{
    D_002E19BC = 0;
    D_001BC0D0.cur = D_001BC0C0;
    D_001BC0D0.count = 3;
    func_11CF20();
}
