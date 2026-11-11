/* LEVEL_20:0x0F0BA0 -- placement copy of LEVEL_16_11EAA0.c: points the global cursor at its table, sets its count to 3, clears a flag and runs the shared reset. */
typedef struct {
    void *cur;
    int count;
} Cursor;

extern char D_0011D2E0[];
extern Cursor D_0011D2F0;
extern int D_00204B94;
extern void func_0EFF68(void);

void func_0F0BA0(void)
{
    D_00204B94 = 0;
    D_0011D2F0.cur = D_0011D2E0;
    D_0011D2F0.count = 3;
    func_0EFF68();
}
