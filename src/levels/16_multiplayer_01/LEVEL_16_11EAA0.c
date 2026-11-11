/* LEVEL_16:0x11EAA0 -- points the global cursor at its table, sets its count to 3, clears a flag and runs the shared reset. */
typedef struct {
    void *cur;
    int count;
} Cursor;

extern char D_001BAC40[];
extern Cursor D_001BAC50;
extern int D_002E163C;
extern void func_11DE68(void);

void func_11EAA0(void)
{
    D_002E163C = 0;
    D_001BAC50.cur = D_001BAC40;
    D_001BAC50.count = 3;
    func_11DE68();
}
